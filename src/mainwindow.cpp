#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTime>
#include <cmath>
#include <QInputDialog>
#include <QTimer>
#include <QMessageBox>
#include<climits>
#include <QSqlQuery>
#include <QSqlError>
#include <QDesktopWidget>

void dialog_to_center(QWidget*);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
        dialog_to_center(this);
        QTime time(0,0,0);
        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
        ui->setupUi(this);
        this->timer = new QTimer(this);
        timer_delay=1000;
        connect(timer, SIGNAL(timeout()), this, SLOT(on_timer_ticked()));
        QObject::connect(this, SIGNAL(time_is_down()),this, SLOT(game_lose()));
        QObject::connect(ui->DEC_lcd, SIGNAL(overflow()),this, SLOT(game_win()));
        QObject::connect(this, SIGNAL(user_action()),this, SLOT(digit_compare()));
        QObject::connect(this, SIGNAL(retry_call()),this, SLOT(on_retry_but_clicked()));
        init_new_game();
        init_db();
        this->REC_table->setWindowFlags(Qt::Dialog);
        this->REC_table->setWindowModality(Qt::WindowModal);
}


void MainWindow::on_but_0_clicked(){
    append_userdata(NUL);
}
void MainWindow::on_but_1_clicked(){
    append_userdata(ONE);
}

void MainWindow::on_but_c_clicked(){
    QString old_value( QString::number( ui->BIN_lcd->intValue(), 2 ) );
    old_value=old_value.mid(0,old_value.length()-1);
    ui->BIN_lcd->display(old_value.toInt(0,2));
    ui->RES_lcd->display(old_value.toInt(0,2));
    emit user_action();
}

void MainWindow::on_but_x_clicked(){
    ui->BIN_lcd->display(0);
    ui->RES_lcd->display(0);
    emit user_action();

}
void MainWindow::on_timer_ticked(){
    ui->TIME_lcd->display(--this->current_time);
    if(current_time<=0){
        emit time_is_down();
    }
}

void MainWindow::on_pause_play_clicked(){
    if(pause){
        game_pause_off();
    }else{
        game_pause_on();
    }
    init_ui();

}

void MainWindow::on_records_but_clicked(){
    if(!pause){
        game_pause_on();
    }
    REC_table_model->select();
   // dialog_to_center(REC_table);
    REC_table->show();


}



void MainWindow::append_userdata(userdata data){
    QString old_value( QString::number( ui->BIN_lcd->intValue(), 2 ) );
    old_value.append((data)?'1':'0');
    ui->BIN_lcd->display(old_value.toInt(0,2));
    ui->RES_lcd->display(old_value.toInt(0,2));
    emit user_action();
}

void MainWindow::game_lose(){
    qDebug()<<"i here";
    timer->stop();
    QString title="END_GAME!";
    QString body="YOU_LOSE!\nYOUR_SCORE: "+QString::number(this->score)+" \nRETRY?";
    switch(make_dialog(title,body)){
      case QMessageBox::Cancel:
         save_data_to_db();
          qApp->quit();
          break;
      case QMessageBox::Ok:
          emit retry_call();
          break;
      default:
           qApp->quit();
    }
}

void MainWindow::game_win(){
    timer->stop();
    save_data_to_db();
     QString title="CONGRATULATIONS!";
     QString body="YOU_WIN!\nYOUR_SCORE: "+QString::number(this->score)+" \nRETRY?";
    switch(make_dialog(title,body)){
      case QMessageBox::Cancel:
          qApp->quit();
          break;
      case QMessageBox::Ok:
          emit retry_call();
          break;
      default:
           qApp->quit();
    }
}

void MainWindow::game_pause_on(){
    pause=true;
    timer->stop();
    ui->DEC_lcd->close();
    ui->BIN_lcd->close();
    ui->RES_lcd->close();
    init_ui();
}

void MainWindow::on_retry_but_clicked(){
    if(QObject::sender()==ui->retry_but){
        game_pause_on();
        QString title="RETRY?!";
        QString body="THIS_GAME_WILL_BE_ENDED!\nYOUR_SCORE: "+QString::number(this->score)+" \nRETRY?";
        if(make_dialog(title,body)==QMessageBox::Cancel){
            game_pause_off();
            return;
        }
    }
    if(pause){
        game_pause_off();
        save_data_to_db();
        init_new_game();
    }else{
        save_data_to_db();
        init_new_game();
    }
}

void MainWindow::game_pause_off(){
    pause=false;
    ui->DEC_lcd->show();
    ui->BIN_lcd->show();
    ui->RES_lcd->show();
    init_ui();
    timer->start(timer_delay);
}

void MainWindow::save_data_to_db(){
    QSqlQuery query(REC_db);
    qDebug()<<this->score;
    QString str=("INSERT INTO records(`name`,`score`) VALUES('"+this->name+"', "+QString::number(this->score)+");");
    if(!query.exec(str)){
        make_dialog("INNER_ERROR",query.lastError().text());
    }

}

void MainWindow::init_new_game(){
    this->level=0;
    dec_calculate();
    this->score=0;
    this->max_time=15;
    this->current_time=this->max_time;
    pause=false;
;
     if(name.isEmpty()){
         bool status_name_dialog;
         this->name=QInputDialog::getText(this,
                                     "NAME",
                                     "YOUR_NAME:",
                                     QLineEdit::Normal,
                                     "",
                                     &status_name_dialog
                                    );
         if(this->name.isEmpty() || !status_name_dialog){
            this->name="UNKNOW";
         }
     }
    init_ui();
    timer->start(timer_delay);
}

void MainWindow::init_new_game(QString name,int dec, int level, int scr){
    this->name=name;
    this->dec_current=dec;
    this->level=level;
    this->score=scr;
    init_ui();
    timer->start(timer_delay);
    pause=false;
}

void MainWindow::init_ui(){
    ui->user_name->setText(this->name);
    ui->DEC_lcd->display(this->dec_current);
    ui->RES_lcd->display(0);
    ui->BIN_lcd->display(0);
    ui->SCORE_lcd->display(this->score);
    ui->TIME_lcd->display(this->current_time);
    ui->LVL_lcd->display(this->level);
    ui->pause_play->setText((pause)?"Play":"Pause");
    ui->but_0->setDisabled(pause);
    ui->but_1->setDisabled(pause);
    ui->but_x->setDisabled(pause);
    ui->but_c->setDisabled(pause);

}


void MainWindow::init_db(){
    REC_db=QSqlDatabase::addDatabase("QSQLITE");
    REC_db.setDatabaseName(".data.s3db");
    REC_db.open();
    QSqlQuery query(REC_db);

    query.exec("CREATE TABLE IF NOT EXISTS `records`(\
               `id` INTEGER PRIMARY KEY,\
               `name` TEXT NOT NULL,\
               `score` INTEGER NOT NULL );");
    REC_table = new QTableView(this);
    REC_table_model = new QSqlTableModel(this,REC_db);
    REC_table_model->setTable("records");
    REC_table_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    REC_table_model->select();
    REC_table_model->setHeaderData(0, Qt::Horizontal, tr("#"));
    REC_table_model->setHeaderData(1, Qt::Horizontal, tr("NAME"));
    REC_table_model->setHeaderData(2, Qt::Horizontal, tr("SCORE"));
    REC_table->setModel(REC_table_model);
    REC_table->hideColumn(0);
    REC_table->sortByColumn(2, Qt::DescendingOrder);
    REC_table->setEditTriggers(QAbstractItemView::NoEditTriggers);

    #if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
        REC_table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        REC_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    #else
        REC_table->verticalHeader()->setResizeMode( QHeaderView::Stretch);
        REC_table->horizontalHeader()->setResizeMode( QHeaderView::Stretch);
    #endif



}

void MainWindow::dec_calculate(){
    int lim_min=pow(2,this->level+1)+1;
    int lim_max=pow(2,this->level+2);
    this->dec_current=(qrand()%(lim_max-lim_min+1))+lim_min;
}

 void MainWindow::digit_compare(){
     if(ui->RES_lcd->value()==dec_current){
         this->score+=dec_current;
          timer->stop();
          level++;
          max_time++;
          /* This is very hard*/
          /*if (level%5==0){
              max_time+=2;
          }*/
          current_time=max_time;
          timer->start(timer_delay);
          dec_calculate();
          init_ui();
     }
 }


int MainWindow::make_dialog(QString title ,QString body){
    QMessageBox *msgBox=new QMessageBox(this);
    msgBox->setWindowFlags(Qt::Dialog);
    msgBox->setWindowModality(Qt::WindowModal);
    msgBox->setWindowTitle(title);
    msgBox->setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox->setText(body);
    return msgBox->exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_help_but_clicked(){
    game_pause_on();
    QString body="  The aim of the game is to find the binary value of the specified decimal number for some time.\n\
    Every actions to display value increases the range of values ";
    body.append("to generate a random DEC number. After each 5-matching values, the maximum time available is increased by 5 seconds.\
    If time runs out, the game is lost.\
    \n  Let's see if there is enough CPU power in your head, that would provide an overflow \
    variable of type Integer (INT_MAX =  ");
    body.append(QString::number(INT_MAX));
    body.append("), which stores a predetermined number :)\
    \n  Enjoy the game! \n\
        Andrey Nagorny (anagorny.com)\n\
        MIT License 2014.");
    make_dialog("HELP", body);
}

void dialog_to_center(QWidget *a){
    const QRect screen = QApplication::desktop()->screenGeometry();
    a->move(screen.width()/2-a->width()/2,screen.height()/2-a->height()/2);
}

