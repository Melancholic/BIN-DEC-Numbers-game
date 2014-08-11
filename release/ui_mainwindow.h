/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_name;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pause_play;
    QFrame *line_4;
    QPushButton *retry_but;
    QFrame *line_5;
    QPushButton *records;
    QPushButton *help_but;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *DEC_label;
    QLCDNumber *DEC_lcd;
    QHBoxLayout *horizontalLayout;
    QLabel *BIN_label;
    QLCDNumber *BIN_lcd;
    QHBoxLayout *horizontalLayout_4;
    QLabel *RES_label;
    QLCDNumber *RES_lcd;
    QGridLayout *gridLayout_2;
    QPushButton *but_0;
    QPushButton *but_x;
    QPushButton *but_c;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *but_1;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *TIME_label;
    QLCDNumber *TIME_lcd;
    QFrame *line;
    QLabel *LVL_label;
    QLCDNumber *LVL_lcd;
    QFrame *line_2;
    QLabel *SCORE_label;
    QLCDNumber *SCORE_lcd;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(578, 421);
        MainWindow->setMinimumSize(QSize(460, 310));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 561, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        user_name = new QLabel(verticalLayoutWidget);
        user_name->setObjectName(QString::fromUtf8("user_name"));

        horizontalLayout_2->addWidget(user_name);

        line_3 = new QFrame(verticalLayoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        pause_play = new QPushButton(verticalLayoutWidget);
        pause_play->setObjectName(QString::fromUtf8("pause_play"));

        horizontalLayout_2->addWidget(pause_play);

        line_4 = new QFrame(verticalLayoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_4);

        retry_but = new QPushButton(verticalLayoutWidget);
        retry_but->setObjectName(QString::fromUtf8("retry_but"));

        horizontalLayout_2->addWidget(retry_but);

        line_5 = new QFrame(verticalLayoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_5);

        records = new QPushButton(verticalLayoutWidget);
        records->setObjectName(QString::fromUtf8("records"));

        horizontalLayout_2->addWidget(records);

        help_but = new QPushButton(verticalLayoutWidget);
        help_but->setObjectName(QString::fromUtf8("help_but"));

        horizontalLayout_2->addWidget(help_but);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        DEC_label = new QLabel(verticalLayoutWidget);
        DEC_label->setObjectName(QString::fromUtf8("DEC_label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DEC_label->sizePolicy().hasHeightForWidth());
        DEC_label->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(DEC_label);

        DEC_lcd = new QLCDNumber(verticalLayoutWidget);
        DEC_lcd->setObjectName(QString::fromUtf8("DEC_lcd"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DEC_lcd->sizePolicy().hasHeightForWidth());
        DEC_lcd->setSizePolicy(sizePolicy1);
        DEC_lcd->setSmallDecimalPoint(false);
        DEC_lcd->setNumDigits(15);
        DEC_lcd->setDigitCount(15);
        DEC_lcd->setSegmentStyle(QLCDNumber::Filled);

        horizontalLayout_5->addWidget(DEC_lcd);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BIN_label = new QLabel(verticalLayoutWidget);
        BIN_label->setObjectName(QString::fromUtf8("BIN_label"));
        sizePolicy.setHeightForWidth(BIN_label->sizePolicy().hasHeightForWidth());
        BIN_label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(BIN_label);

        BIN_lcd = new QLCDNumber(verticalLayoutWidget);
        BIN_lcd->setObjectName(QString::fromUtf8("BIN_lcd"));
        sizePolicy1.setHeightForWidth(BIN_lcd->sizePolicy().hasHeightForWidth());
        BIN_lcd->setSizePolicy(sizePolicy1);
        BIN_lcd->setNumDigits(15);
        BIN_lcd->setMode(QLCDNumber::Bin);
        BIN_lcd->setProperty("value", QVariant(0));

        horizontalLayout->addWidget(BIN_lcd);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        RES_label = new QLabel(verticalLayoutWidget);
        RES_label->setObjectName(QString::fromUtf8("RES_label"));

        horizontalLayout_4->addWidget(RES_label);

        RES_lcd = new QLCDNumber(verticalLayoutWidget);
        RES_lcd->setObjectName(QString::fromUtf8("RES_lcd"));
        sizePolicy1.setHeightForWidth(RES_lcd->sizePolicy().hasHeightForWidth());
        RES_lcd->setSizePolicy(sizePolicy1);
        RES_lcd->setNumDigits(15);

        horizontalLayout_4->addWidget(RES_lcd);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        but_0 = new QPushButton(verticalLayoutWidget);
        but_0->setObjectName(QString::fromUtf8("but_0"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(but_0->sizePolicy().hasHeightForWidth());
        but_0->setSizePolicy(sizePolicy2);
        but_0->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(but_0, 0, 1, 1, 1);

        but_x = new QPushButton(verticalLayoutWidget);
        but_x->setObjectName(QString::fromUtf8("but_x"));

        gridLayout_2->addWidget(but_x, 2, 1, 1, 1);

        but_c = new QPushButton(verticalLayoutWidget);
        but_c->setObjectName(QString::fromUtf8("but_c"));

        gridLayout_2->addWidget(but_c, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        but_1 = new QPushButton(verticalLayoutWidget);
        but_1->setObjectName(QString::fromUtf8("but_1"));

        gridLayout_2->addWidget(but_1, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        TIME_label = new QLabel(verticalLayoutWidget);
        TIME_label->setObjectName(QString::fromUtf8("TIME_label"));

        horizontalLayout_6->addWidget(TIME_label);

        TIME_lcd = new QLCDNumber(verticalLayoutWidget);
        TIME_lcd->setObjectName(QString::fromUtf8("TIME_lcd"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(TIME_lcd->sizePolicy().hasHeightForWidth());
        TIME_lcd->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(TIME_lcd);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line);

        LVL_label = new QLabel(verticalLayoutWidget);
        LVL_label->setObjectName(QString::fromUtf8("LVL_label"));

        horizontalLayout_6->addWidget(LVL_label);

        LVL_lcd = new QLCDNumber(verticalLayoutWidget);
        LVL_lcd->setObjectName(QString::fromUtf8("LVL_lcd"));
        sizePolicy3.setHeightForWidth(LVL_lcd->sizePolicy().hasHeightForWidth());
        LVL_lcd->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(LVL_lcd);

        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_2);

        SCORE_label = new QLabel(verticalLayoutWidget);
        SCORE_label->setObjectName(QString::fromUtf8("SCORE_label"));

        horizontalLayout_6->addWidget(SCORE_label);

        SCORE_lcd = new QLCDNumber(verticalLayoutWidget);
        SCORE_lcd->setObjectName(QString::fromUtf8("SCORE_lcd"));
        sizePolicy3.setHeightForWidth(SCORE_lcd->sizePolicy().hasHeightForWidth());
        SCORE_lcd->setSizePolicy(sizePolicy3);
        SCORE_lcd->setNumDigits(5);

        horizontalLayout_6->addWidget(SCORE_lcd);


        verticalLayout->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 578, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(but_0, but_1);
        QWidget::setTabOrder(but_1, but_x);
        QWidget::setTabOrder(but_x, but_c);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        user_name->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pause_play->setText(QString());
        retry_but->setText(QApplication::translate("MainWindow", "RETRY", 0, QApplication::UnicodeUTF8));
        records->setText(QApplication::translate("MainWindow", "RECORDS", 0, QApplication::UnicodeUTF8));
        help_but->setText(QApplication::translate("MainWindow", "HELP", 0, QApplication::UnicodeUTF8));
        DEC_label->setText(QApplication::translate("MainWindow", "DEC:", 0, QApplication::UnicodeUTF8));
        BIN_label->setText(QApplication::translate("MainWindow", "BIN: ", 0, QApplication::UnicodeUTF8));
        RES_label->setText(QApplication::translate("MainWindow", "RES:", 0, QApplication::UnicodeUTF8));
        but_0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        but_x->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        but_c->setText(QApplication::translate("MainWindow", "<", 0, QApplication::UnicodeUTF8));
        but_1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        TIME_label->setText(QApplication::translate("MainWindow", "TIME:", 0, QApplication::UnicodeUTF8));
        LVL_label->setText(QApplication::translate("MainWindow", "LVL:", 0, QApplication::UnicodeUTF8));
        SCORE_label->setText(QApplication::translate("MainWindow", "SCORE:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
