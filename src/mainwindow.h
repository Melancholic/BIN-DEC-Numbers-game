#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"QtSql/QSqlDatabase"
#include"QTableView"
#include<QtSql/QSqlTableModel>

enum userdata {NUL,ONE} ;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Ui::MainWindow *ui;
    QTableView *REC_table;
    QSqlDatabase REC_db;
    QTimer *timer;
    QSqlTableModel *REC_table_model;
    int level;
    int score;
    int dec_current;
    int timer_delay;
    int max_time;
    int current_time;
    bool pause;
    QString name;
    void init_new_game();
    void init_new_game(QString, int, int, int );
    void init_ui();
    void init_db();
    void dec_calculate();
    int make_dialog(QString,QString);
    void append_userdata(userdata);
    void save_data_to_db();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void time_is_down();
    void end_game();
    void user_action();
    void retry_call();

private slots:
    void on_but_0_clicked();
    void on_but_1_clicked();
    void on_but_c_clicked();
    void on_but_x_clicked();
    void on_timer_ticked();
    //void reset_timer();
    void game_lose();
    void game_win();
    void  game_pause_off();
    void game_pause_on();
    void digit_compare();
    void on_pause_play_clicked();
    void on_retry_but_clicked();
    void on_help_but_clicked();
    void on_records_but_clicked();
};



#endif // MAINWINDOW_H
