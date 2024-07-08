/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *lab_rid;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *lab_lamp;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_lamp_on;
    QPushButton *btn_lamp_off;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lab_air;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_air_on;
    QPushButton *btn_air_off;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        lab_rid = new QLabel(centralwidget);
        lab_rid->setObjectName(QString::fromUtf8("lab_rid"));
        lab_rid->setFont(font);
        lab_rid->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lab_rid);


        verticalLayout_4->addLayout(horizontalLayout_3);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lab_lamp = new QLabel(centralwidget);
        lab_lamp->setObjectName(QString::fromUtf8("lab_lamp"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lab_lamp->sizePolicy().hasHeightForWidth());
        lab_lamp->setSizePolicy(sizePolicy);
        lab_lamp->setMaximumSize(QSize(16777215, 16777215));
        lab_lamp->setSizeIncrement(QSize(0, 0));
        lab_lamp->setBaseSize(QSize(0, 0));
        lab_lamp->setPixmap(QPixmap(QString::fromUtf8(":/img/res/lamp_off.png")));
        lab_lamp->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lab_lamp);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_lamp_on = new QPushButton(centralwidget);
        btn_lamp_on->setObjectName(QString::fromUtf8("btn_lamp_on"));
        btn_lamp_on->setFont(font1);

        horizontalLayout->addWidget(btn_lamp_on);

        btn_lamp_off = new QPushButton(centralwidget);
        btn_lamp_off->setObjectName(QString::fromUtf8("btn_lamp_off"));
        btn_lamp_off->setFont(font1);

        horizontalLayout->addWidget(btn_lamp_off);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout_3);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lab_air = new QLabel(centralwidget);
        lab_air->setObjectName(QString::fromUtf8("lab_air"));
        lab_air->setPixmap(QPixmap(QString::fromUtf8(":/img/res/lamp_off.png")));
        lab_air->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lab_air);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_air_on = new QPushButton(centralwidget);
        btn_air_on->setObjectName(QString::fromUtf8("btn_air_on"));
        btn_air_on->setFont(font1);

        horizontalLayout_2->addWidget(btn_air_on);

        btn_air_off = new QPushButton(centralwidget);
        btn_air_off->setObjectName(QString::fromUtf8("btn_air_off"));
        btn_air_off->setFont(font1);

        horizontalLayout_2->addWidget(btn_air_off);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\345\217\267:", nullptr));
        lab_rid->setText(QApplication::translate("MainWindow", "0", nullptr));
        lab_lamp->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\347\205\247\346\230\216", nullptr));
        btn_lamp_on->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        btn_lamp_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        lab_air->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\347\251\272\350\260\203", nullptr));
        btn_air_on->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        btn_air_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
