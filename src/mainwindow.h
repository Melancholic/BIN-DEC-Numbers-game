#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Ui::MainWindow *ui;
    int level;
    QString name;
    int score;
    int dec_current;
    void init_new_game();
    void init_new_game(QString, int, int, int );
    QTimer *timer;
    int timer_delay;
    int max_time;
    int current_time;
    void init_ui();
    void dec_calculate();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void time_is_down();
    void end_game();
    void user_action();

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

};

#endif // MAINWINDOW_H
