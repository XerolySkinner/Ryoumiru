#include "mainwindow.h"
#include "ui_mainwindow.h"
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::init_connect
///
void MainWindow::init_connect(){
    connect(player, &QMediaPlayer::stateChanged, this, &MainWindow::handleStateChanged);
//--------------------------------------------------------------------------------------------------
    connect(ui->btn_call_call, &QPushButton::clicked, this,&MainWindow::on_btn_call_call_clicked);
    connect(ui->btn_call_stop, &QPushButton::clicked, this,&MainWindow::on_btn_call_stop_clicked);
//--------------------------------------------------------------------------------------------------
    connect(ui->btn_elec_all_lamp_on, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecall$lamp", "all", "1");
        });
    connect(ui->btn_elec_all_lamp_off, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecall$lamp", "all", "0");
        });
    connect(ui->btn_elec_all_air_on, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecall$air", "all", "1");
        });
    connect(ui->btn_elec_all_air_off, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecall$air", "all", "0");
        });

    connect(ui->btn_elec_rid_lamp_on, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecrid$lamp",ui->lie_elec_rid->text().toUtf8().constData(), "1");
        });
    connect(ui->btn_elec_rid_lamp_off, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecrid$lamp",ui->lie_elec_rid->text().toUtf8().constData(), "0");
        });
    connect(ui->btn_elec_rid_air_on, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecrid$air",ui->lie_elec_rid->text().toUtf8().constData(), "1");
        });
    connect(ui->btn_elec_rid_air_off, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecrid$air",ui->lie_elec_rid->text().toUtf8().constData(), "0");
        });
/*
    connect(ui->btn_elec_group_lamp_on, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecgroup$lamp",ui->cb_elec_group->currentText().toUtf8().constData(), "1");
        });
    connect(ui->btn_elec_group_lamp_off, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecgroup$lamp",ui->cb_elec_group->currentText().toUtf8().constData(), "0");
        });
    connect(ui->btn_elec_group_air_on, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecgroup$air",ui->cb_elec_group->currentText().toUtf8().constData(), "1");
        });
    connect(ui->btn_elec_group_air_off, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecgroup$air",ui->cb_elec_group->currentText().toUtf8().constData(), "0");
        });
*/
    connect(ui->btn_elec_group_lamp_on, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecall$lamp",((ui->cb_elec_group->currentText().toUtf8().constData()[0]=='B') ? "0" : "all"), "1");
        });
    connect(ui->btn_elec_group_lamp_off, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecall$lamp",((ui->cb_elec_group->currentText().toUtf8().constData()[0]=='B') ? "0" : "all"), "0");
        });
    connect(ui->btn_elec_group_air_on, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecall$air",((ui->cb_elec_group->currentText().toUtf8().constData()[0]=='B') ? "0" : "all"), "1");
        });
    connect(ui->btn_elec_group_air_off, &QPushButton::clicked, this, [=]() {
        on_btn_elec_clicked("elecall$air",((ui->cb_elec_group->currentText().toUtf8().constData()[0]=='B') ? "0" : "all"), "0");
        });


//--------------------------------------------------------------------------------------------------
}

void MainWindow::handleStateChanged(QMediaPlayer::State state)
{
    if (state == QMediaPlayer::PlayingState) {
        ui->tex_log->append(">> 通话进行中");
    } else if (state == QMediaPlayer::PausedState) {
        ui->tex_log->append(">> 通话暂停");
    } else if (state == QMediaPlayer::StoppedState) {
        ui->tex_log->append(">> 通话已停止");
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////
