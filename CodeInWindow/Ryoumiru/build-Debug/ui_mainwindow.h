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
#include <QtMultimediaWidgets/QVideoWidget.h>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QFrame *line_2;
    QVideoWidget *video_widget;
    QFrame *line;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label;
    QLineEdit *tex_call_rid;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_call_stop;
    QPushButton *btn_call_call;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *btn_call_test;
    QLabel *lab_call_test;
    QFrame *line_5;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *lab_elec_all_lamp;
    QPushButton *btn_elec_all_lamp_on;
    QPushButton *btn_elec_all_lamp_off;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *lab_elec_all_air;
    QPushButton *btn_elec_all_air_on;
    QPushButton *btn_elec_all_air_off;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QComboBox *cb_elec_group;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLabel *lab_elec_group_lamp;
    QPushButton *btn_elec_group_lamp_on;
    QPushButton *btn_elec_group_lamp_off;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLabel *lab_elec_group_air;
    QPushButton *btn_elec_group_air_on;
    QPushButton *btn_elec_group_air_off;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLineEdit *lie_elec_rid;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QLabel *lab_elec_rid_lamp;
    QPushButton *btn_elec_rid_lamp_on;
    QPushButton *btn_elec_rid_lamp_off;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_16;
    QLabel *lab_elec_rid_air;
    QPushButton *btn_elec_rid_air_on;
    QPushButton *btn_elec_rid_air_off;
    QFrame *line_7;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_19;
    QLineEdit *le_spy_rid_set;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btn_spy_rid_stop;
    QPushButton *btn_spy_rid_listen;
    QLabel *lab_spy_rid_state;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *btn_spy_rid_radio_stop;
    QPushButton *btn_spy_rid_radio_on;
    QLabel *lab_radio_rid_state;
    QFrame *line_8;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_22;
    QComboBox *cb_spy_group_set;
    QLabel *lab_spy_group_state;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *btn_spy_group_stop;
    QPushButton *btn_spy_group_out;
    QSpacerItem *verticalSpacer;
    QFrame *line_6;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_23;
    QTextEdit *tex_log;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(780, 786);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("System"));
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        video_widget = new QVideoWidget(centralwidget);
        video_widget->setObjectName(QString::fromUtf8("video_widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(video_widget->sizePolicy().hasHeightForWidth());
        video_widget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(video_widget);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(label);

        tex_call_rid = new QLineEdit(centralwidget);
        tex_call_rid->setObjectName(QString::fromUtf8("tex_call_rid"));
        sizePolicy1.setHeightForWidth(tex_call_rid->sizePolicy().hasHeightForWidth());
        tex_call_rid->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(tex_call_rid);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_call_stop = new QPushButton(centralwidget);
        btn_call_stop->setObjectName(QString::fromUtf8("btn_call_stop"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_call_stop->sizePolicy().hasHeightForWidth());
        btn_call_stop->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(btn_call_stop);

        btn_call_call = new QPushButton(centralwidget);
        btn_call_call->setObjectName(QString::fromUtf8("btn_call_call"));
        sizePolicy2.setHeightForWidth(btn_call_call->sizePolicy().hasHeightForWidth());
        btn_call_call->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(btn_call_call);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        btn_call_test = new QPushButton(centralwidget);
        btn_call_test->setObjectName(QString::fromUtf8("btn_call_test"));

        horizontalLayout_16->addWidget(btn_call_test);

        lab_call_test = new QLabel(centralwidget);
        lab_call_test->setObjectName(QString::fromUtf8("lab_call_test"));

        horizontalLayout_16->addWidget(lab_call_test);


        verticalLayout->addLayout(horizontalLayout_16);


        horizontalLayout_18->addLayout(verticalLayout);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_18->addWidget(line_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label_3);

        lab_elec_all_lamp = new QLabel(centralwidget);
        lab_elec_all_lamp->setObjectName(QString::fromUtf8("lab_elec_all_lamp"));
        sizePolicy3.setHeightForWidth(lab_elec_all_lamp->sizePolicy().hasHeightForWidth());
        lab_elec_all_lamp->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(lab_elec_all_lamp);

        btn_elec_all_lamp_on = new QPushButton(centralwidget);
        btn_elec_all_lamp_on->setObjectName(QString::fromUtf8("btn_elec_all_lamp_on"));
        sizePolicy2.setHeightForWidth(btn_elec_all_lamp_on->sizePolicy().hasHeightForWidth());
        btn_elec_all_lamp_on->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(btn_elec_all_lamp_on);

        btn_elec_all_lamp_off = new QPushButton(centralwidget);
        btn_elec_all_lamp_off->setObjectName(QString::fromUtf8("btn_elec_all_lamp_off"));
        sizePolicy2.setHeightForWidth(btn_elec_all_lamp_off->sizePolicy().hasHeightForWidth());
        btn_elec_all_lamp_off->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(btn_elec_all_lamp_off);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(label_5);

        lab_elec_all_air = new QLabel(centralwidget);
        lab_elec_all_air->setObjectName(QString::fromUtf8("lab_elec_all_air"));
        sizePolicy3.setHeightForWidth(lab_elec_all_air->sizePolicy().hasHeightForWidth());
        lab_elec_all_air->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(lab_elec_all_air);

        btn_elec_all_air_on = new QPushButton(centralwidget);
        btn_elec_all_air_on->setObjectName(QString::fromUtf8("btn_elec_all_air_on"));
        sizePolicy2.setHeightForWidth(btn_elec_all_air_on->sizePolicy().hasHeightForWidth());
        btn_elec_all_air_on->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(btn_elec_all_air_on);

        btn_elec_all_air_off = new QPushButton(centralwidget);
        btn_elec_all_air_off->setObjectName(QString::fromUtf8("btn_elec_all_air_off"));
        sizePolicy2.setHeightForWidth(btn_elec_all_air_off->sizePolicy().hasHeightForWidth());
        btn_elec_all_air_off->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(btn_elec_all_air_off);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_2);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_9->addWidget(label_8);

        cb_elec_group = new QComboBox(centralwidget);
        cb_elec_group->addItem(QString());
        cb_elec_group->addItem(QString());
        cb_elec_group->addItem(QString());
        cb_elec_group->setObjectName(QString::fromUtf8("cb_elec_group"));

        horizontalLayout_9->addWidget(cb_elec_group);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(label_9);

        lab_elec_group_lamp = new QLabel(centralwidget);
        lab_elec_group_lamp->setObjectName(QString::fromUtf8("lab_elec_group_lamp"));
        sizePolicy3.setHeightForWidth(lab_elec_group_lamp->sizePolicy().hasHeightForWidth());
        lab_elec_group_lamp->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(lab_elec_group_lamp);

        btn_elec_group_lamp_on = new QPushButton(centralwidget);
        btn_elec_group_lamp_on->setObjectName(QString::fromUtf8("btn_elec_group_lamp_on"));
        sizePolicy2.setHeightForWidth(btn_elec_group_lamp_on->sizePolicy().hasHeightForWidth());
        btn_elec_group_lamp_on->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(btn_elec_group_lamp_on);

        btn_elec_group_lamp_off = new QPushButton(centralwidget);
        btn_elec_group_lamp_off->setObjectName(QString::fromUtf8("btn_elec_group_lamp_off"));
        sizePolicy2.setHeightForWidth(btn_elec_group_lamp_off->sizePolicy().hasHeightForWidth());
        btn_elec_group_lamp_off->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(btn_elec_group_lamp_off);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(label_11);

        lab_elec_group_air = new QLabel(centralwidget);
        lab_elec_group_air->setObjectName(QString::fromUtf8("lab_elec_group_air"));
        sizePolicy3.setHeightForWidth(lab_elec_group_air->sizePolicy().hasHeightForWidth());
        lab_elec_group_air->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(lab_elec_group_air);

        btn_elec_group_air_on = new QPushButton(centralwidget);
        btn_elec_group_air_on->setObjectName(QString::fromUtf8("btn_elec_group_air_on"));
        sizePolicy2.setHeightForWidth(btn_elec_group_air_on->sizePolicy().hasHeightForWidth());
        btn_elec_group_air_on->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(btn_elec_group_air_on);

        btn_elec_group_air_off = new QPushButton(centralwidget);
        btn_elec_group_air_off->setObjectName(QString::fromUtf8("btn_elec_group_air_off"));
        sizePolicy2.setHeightForWidth(btn_elec_group_air_off->sizePolicy().hasHeightForWidth());
        btn_elec_group_air_off->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(btn_elec_group_air_off);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout_3);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_10->addWidget(label_13);

        lie_elec_rid = new QLineEdit(centralwidget);
        lie_elec_rid->setObjectName(QString::fromUtf8("lie_elec_rid"));

        horizontalLayout_10->addWidget(lie_elec_rid);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(label_14);

        lab_elec_rid_lamp = new QLabel(centralwidget);
        lab_elec_rid_lamp->setObjectName(QString::fromUtf8("lab_elec_rid_lamp"));
        sizePolicy3.setHeightForWidth(lab_elec_rid_lamp->sizePolicy().hasHeightForWidth());
        lab_elec_rid_lamp->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(lab_elec_rid_lamp);

        btn_elec_rid_lamp_on = new QPushButton(centralwidget);
        btn_elec_rid_lamp_on->setObjectName(QString::fromUtf8("btn_elec_rid_lamp_on"));
        sizePolicy2.setHeightForWidth(btn_elec_rid_lamp_on->sizePolicy().hasHeightForWidth());
        btn_elec_rid_lamp_on->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(btn_elec_rid_lamp_on);

        btn_elec_rid_lamp_off = new QPushButton(centralwidget);
        btn_elec_rid_lamp_off->setObjectName(QString::fromUtf8("btn_elec_rid_lamp_off"));
        sizePolicy2.setHeightForWidth(btn_elec_rid_lamp_off->sizePolicy().hasHeightForWidth());
        btn_elec_rid_lamp_off->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(btn_elec_rid_lamp_off);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy3.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(label_16);

        lab_elec_rid_air = new QLabel(centralwidget);
        lab_elec_rid_air->setObjectName(QString::fromUtf8("lab_elec_rid_air"));
        sizePolicy3.setHeightForWidth(lab_elec_rid_air->sizePolicy().hasHeightForWidth());
        lab_elec_rid_air->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(lab_elec_rid_air);

        btn_elec_rid_air_on = new QPushButton(centralwidget);
        btn_elec_rid_air_on->setObjectName(QString::fromUtf8("btn_elec_rid_air_on"));
        sizePolicy2.setHeightForWidth(btn_elec_rid_air_on->sizePolicy().hasHeightForWidth());
        btn_elec_rid_air_on->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(btn_elec_rid_air_on);

        btn_elec_rid_air_off = new QPushButton(centralwidget);
        btn_elec_rid_air_off->setObjectName(QString::fromUtf8("btn_elec_rid_air_off"));
        sizePolicy2.setHeightForWidth(btn_elec_rid_air_off->sizePolicy().hasHeightForWidth());
        btn_elec_rid_air_off->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(btn_elec_rid_air_off);


        verticalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_18->addLayout(verticalLayout_5);


        verticalLayout_8->addLayout(horizontalLayout_18);

        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_7);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        verticalLayout_7->addWidget(label_18);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy1.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(label_19);

        le_spy_rid_set = new QLineEdit(centralwidget);
        le_spy_rid_set->setObjectName(QString::fromUtf8("le_spy_rid_set"));

        horizontalLayout_8->addWidget(le_spy_rid_set);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        btn_spy_rid_stop = new QPushButton(centralwidget);
        btn_spy_rid_stop->setObjectName(QString::fromUtf8("btn_spy_rid_stop"));

        horizontalLayout_14->addWidget(btn_spy_rid_stop);

        btn_spy_rid_listen = new QPushButton(centralwidget);
        btn_spy_rid_listen->setObjectName(QString::fromUtf8("btn_spy_rid_listen"));

        horizontalLayout_14->addWidget(btn_spy_rid_listen);

        lab_spy_rid_state = new QLabel(centralwidget);
        lab_spy_rid_state->setObjectName(QString::fromUtf8("lab_spy_rid_state"));
        sizePolicy3.setHeightForWidth(lab_spy_rid_state->sizePolicy().hasHeightForWidth());
        lab_spy_rid_state->setSizePolicy(sizePolicy3);

        horizontalLayout_14->addWidget(lab_spy_rid_state);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        btn_spy_rid_radio_stop = new QPushButton(centralwidget);
        btn_spy_rid_radio_stop->setObjectName(QString::fromUtf8("btn_spy_rid_radio_stop"));

        horizontalLayout_15->addWidget(btn_spy_rid_radio_stop);

        btn_spy_rid_radio_on = new QPushButton(centralwidget);
        btn_spy_rid_radio_on->setObjectName(QString::fromUtf8("btn_spy_rid_radio_on"));

        horizontalLayout_15->addWidget(btn_spy_rid_radio_on);

        lab_radio_rid_state = new QLabel(centralwidget);
        lab_radio_rid_state->setObjectName(QString::fromUtf8("lab_radio_rid_state"));
        sizePolicy3.setHeightForWidth(lab_radio_rid_state->sizePolicy().hasHeightForWidth());
        lab_radio_rid_state->setSizePolicy(sizePolicy3);

        horizontalLayout_15->addWidget(lab_radio_rid_state);


        verticalLayout_7->addLayout(horizontalLayout_15);

        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_8);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        verticalLayout_7->addWidget(label_20);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(label_22);

        cb_spy_group_set = new QComboBox(centralwidget);
        cb_spy_group_set->addItem(QString());
        cb_spy_group_set->addItem(QString());
        cb_spy_group_set->addItem(QString());
        cb_spy_group_set->setObjectName(QString::fromUtf8("cb_spy_group_set"));

        horizontalLayout_13->addWidget(cb_spy_group_set);

        lab_spy_group_state = new QLabel(centralwidget);
        lab_spy_group_state->setObjectName(QString::fromUtf8("lab_spy_group_state"));
        sizePolicy3.setHeightForWidth(lab_spy_group_state->sizePolicy().hasHeightForWidth());
        lab_spy_group_state->setSizePolicy(sizePolicy3);

        horizontalLayout_13->addWidget(lab_spy_group_state);


        verticalLayout_6->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        btn_spy_group_stop = new QPushButton(centralwidget);
        btn_spy_group_stop->setObjectName(QString::fromUtf8("btn_spy_group_stop"));

        horizontalLayout_12->addWidget(btn_spy_group_stop);

        btn_spy_group_out = new QPushButton(centralwidget);
        btn_spy_group_out->setObjectName(QString::fromUtf8("btn_spy_group_out"));

        horizontalLayout_12->addWidget(btn_spy_group_out);


        verticalLayout_6->addLayout(horizontalLayout_12);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout_17->addLayout(verticalLayout_7);

        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_17->addWidget(line_6);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

        verticalLayout_10->addWidget(label_23);

        tex_log = new QTextEdit(centralwidget);
        tex_log->setObjectName(QString::fromUtf8("tex_log"));

        verticalLayout_10->addWidget(tex_log);


        horizontalLayout_17->addLayout(verticalLayout_10);


        verticalLayout_8->addLayout(horizontalLayout_17);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 780, 29));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\231\272\350\203\275\345\256\277\350\210\215\346\216\247\345\210\266\347\263\273\347\273\237", nullptr));
        action->setText(QApplication::translate("MainWindow", "\351\237\263\351\242\221\345\202\250\345\255\230\344\275\215\347\275\256", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\351\200\232\350\257\235\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\345\217\267:", nullptr));
        tex_call_rid->setText(QApplication::translate("MainWindow", "326", nullptr));
        btn_call_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        btn_call_call->setText(QApplication::translate("MainWindow", "\345\221\274\345\217\253", nullptr));
        btn_call_test->setText(QApplication::translate("MainWindow", "\350\257\206\345\210\253", nullptr));
        lab_call_test->setText(QApplication::translate("MainWindow", "\346\227\240", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\225\264\346\245\274\347\224\265\346\260\224\345\205\250\346\216\247\345\210\266", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\347\205\247\346\230\216\347\212\266\346\200\201:", nullptr));
        lab_elec_all_lamp->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        btn_elec_all_lamp_on->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        btn_elec_all_lamp_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\347\251\272\350\260\203\347\212\266\346\200\201:", nullptr));
        lab_elec_all_air->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        btn_elec_all_air_on->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        btn_elec_all_air_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\347\273\204\346\216\247\345\210\266", nullptr));
        cb_elec_group->setItemText(0, QApplication::translate("MainWindow", "all", nullptr));
        cb_elec_group->setItemText(1, QApplication::translate("MainWindow", "A", nullptr));
        cb_elec_group->setItemText(2, QApplication::translate("MainWindow", "B", nullptr));

        label_9->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\347\205\247\346\230\216\347\212\266\346\200\201:", nullptr));
        lab_elec_group_lamp->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        btn_elec_group_lamp_on->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        btn_elec_group_lamp_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\347\251\272\350\260\203\347\212\266\346\200\201:", nullptr));
        lab_elec_group_air->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        btn_elec_group_air_on->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        btn_elec_group_air_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\345\215\225\351\227\264\345\256\277\350\210\215\346\216\247\345\210\266", nullptr));
        lie_elec_rid->setText(QApplication::translate("MainWindow", "326", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\347\205\247\346\230\216\347\212\266\346\200\201:", nullptr));
        lab_elec_rid_lamp->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        btn_elec_rid_lamp_on->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        btn_elec_rid_lamp_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\347\251\272\350\260\203\347\212\266\346\200\201:", nullptr));
        lab_elec_rid_air->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        btn_elec_rid_air_on->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        btn_elec_rid_air_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "\347\233\221\345\220\254", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\345\217\267:", nullptr));
        le_spy_rid_set->setText(QApplication::translate("MainWindow", "326", nullptr));
        btn_spy_rid_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\347\233\221\345\220\254", nullptr));
        btn_spy_rid_listen->setText(QApplication::translate("MainWindow", "\347\233\221\345\220\254", nullptr));
        lab_spy_rid_state->setText(QApplication::translate("MainWindow", "\346\227\240\347\212\266\346\200\201", nullptr));
        btn_spy_rid_radio_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\222\255\351\237\263", nullptr));
        btn_spy_rid_radio_on->setText(QApplication::translate("MainWindow", "\346\222\255\351\237\263", nullptr));
        lab_radio_rid_state->setText(QApplication::translate("MainWindow", "\346\227\240\347\212\266\346\200\201", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\347\276\244\345\221\274\345\256\277\350\210\215", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\347\273\204:", nullptr));
        cb_spy_group_set->setItemText(0, QApplication::translate("MainWindow", "all", nullptr));
        cb_spy_group_set->setItemText(1, QApplication::translate("MainWindow", "A", nullptr));
        cb_spy_group_set->setItemText(2, QApplication::translate("MainWindow", "B", nullptr));

        lab_spy_group_state->setText(QApplication::translate("MainWindow", "\346\227\240\347\212\266\346\200\201", nullptr));
        btn_spy_group_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        btn_spy_group_out->setText(QApplication::translate("MainWindow", "\346\222\255\351\237\263", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\344\272\213\344\273\266\346\227\245\345\277\227", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
