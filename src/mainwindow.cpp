#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTime>
#include <cmath>
#include <QInputDialog>
#include <QTimer>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
        QTime time(0,0,0);
        qsrand(time.secsTo(QTime::currentTime()));
        ui->setupUi(this);
        this->timer = new QTimer(this);
        timer_delay=1000;
        connect(timer, SIGNAL(timeout()), this, SLOT(on_timer_ticked()));
        QObject::connect(this, SIGNAL(time_is_down()),
                              this, SLOT(game_ended()));
        QObject::connect(this, SIGNAL(end_game()),
                              this, SLOT(game_ended()));
        init_new_game();

}

void MainWindow::on_but_0_clicked(){
    QString old_value( QString::number( ui->BIN_lcd->intValue(), 2 ) );
    old_value.append('0');
    ui->BIN_lcd->display(old_value.toInt(0,2));
    ui->RES_lcd->display(old_value.toInt(0,2));



}
void MainWindow::on_but_1_clicked(){
    QString old_value( QString::number( ui->BIN_lcd->intValue(), 2 ) );
    old_value.append('1');
    ui->BIN_lcd->display(old_value.toInt(0,2));
    ui->RES_lcd->display(old_value.toInt(0,2));
}

void MainWindow::on_but_c_clicked(){
    QString old_value( QString::number( ui->BIN_lcd->intValue(), 2 ) );
    old_value=old_value.mid(0,old_value.length()-1);
    ui->BIN_lcd->display(old_value.toInt(0,2));
    ui->RES_lcd->display(old_value.toInt(0,2));
}

void MainWindow::on_but_x_clicked(){
    ui->BIN_lcd->display(0);
    ui->RES_lcd->display(0);

}
void MainWindow::on_timer_ticked(){
    ui->TIME_lcd->display(--this->current_time);
    if(current_time<0){
        emit time_is_down();
    }
}
/*
void MainWindow::reset_timer(){

    this->current_time=this->max_time;
    this->score-=pow(2,this->level);
    if(this->score<0){
        emit end_game();
    }
    ui->SCORE_lcd->display(this->score);
    ui->TIME_lcd->display(this->current_time);
    int lim_min=pow(2,this->level+1)+1;
    int lim_max=pow(2,this->level+2);
    this->dec_current=(qrand()%(lim_max-lim_min+1))+lim_min;
    ui->DEC_lcd->display(this->dec_current);
}
*/
void MainWindow::game_ended(){
    timer->stop();
    QMessageBox *msgBox=new QMessageBox(this);
    msgBox->setWindowTitle("END_GAME!");
    msgBox->setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox->setText("YOU_LUSE!\nYOUR_SCORE: "+QString::number(this->score)+" \nRETRY?");
    switch(msgBox->exec()){
      case QMessageBox::Cancel:
          qApp->quit();
          break;
      case QMessageBox::Ok:
          this->init_new_game();
          break;
      default:
           qApp->quit();
    }
}

void MainWindow::init_new_game(){
    this->level=0;
    dec_calculate();
    this->score=0;
    this->max_time=15;
    this->current_time=this->max_time;
    bool status_name_dialog;
    init_ui();
    this->name=QInputDialog::getText(this,
                                     "NAME",
                                     "YOUR_NAME:",
                                     QLineEdit::Normal,
                                     "",
                                     &status_name_dialog
                                    );
    if(!status_name_dialog || this->name.isEmpty()){
        this->name="UNKNOW";
    }
    timer->start(timer_delay);
}

void MainWindow::init_new_game(QString name,int dec, int level, int scr){
    this->name=name;
    this->dec_current=dec;
    this->level=level;
    this->score=scr;
    init_ui();
    timer->start(timer_delay);
}

void MainWindow::init_ui(){

    ui->DEC_lcd->display(this->dec_current);
    ui->RES_lcd->display(0);
    ui->BIN_lcd->display(0);
    ui->SCORE_lcd->display(this->score);
    ui->TIME_lcd->display(this->current_time);
    ui->LVL_lcd->display(this->level);

}

void MainWindow::dec_calculate(){
    int lim_min=pow(2,this->level+1)+1;
    int lim_max=pow(2,this->level+2);
    this->dec_current=(qrand()%(lim_max-lim_min+1))+lim_min;
}



MainWindow::~MainWindow()
{
    delete ui;
}

