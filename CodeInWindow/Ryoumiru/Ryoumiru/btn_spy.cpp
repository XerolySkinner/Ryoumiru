#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vartable.h"
#include <sstream>
#include "QDebug"
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::on_btn_spy_rid_stop_clicked
///
void MainWindow::on_btn_spy_rid_stop_clicked()
{
    ui->tex_log->append(">> 停止监听");
    ui->lab_spy_rid_state->setText("停止监听");

    udp_sock.transmitData("spyrid-(%s)-(0)-(0)",ui->le_spy_rid_set->text().toUtf8().constData());
    AudioProcess->close();
}
//--------------------------------------------------------------------------------------------------
void MainWindow::on_btn_spy_rid_listen_clicked()
{
    ui->tex_log->append(">> 进行监听");
    ui->lab_spy_rid_state->setText("正在监听");

    udp_sock.transmitData("spyrid-(%s)-(1)-(0)",ui->le_spy_rid_set->text().toUtf8().constData());
    AudioProcess->start("python D:/Qt/Ryoumiru/Ryoumiru/PlayAudio.py");
}
//--------------------------------------------------------------------------------------------------
void MainWindow::on_btn_spy_rid_radio_stop_clicked(){
    ui->tex_log->append(">> 停止对其广播");
    ui->lab_spy_group_state->setText("停止广播");

    //udp_sock.transmitData("spyrid-(%s)-(0)-(0)",ui->le_spy_rid_set->text().toUtf8().constData());
    RadioProcess->close();
}

void MainWindow::on_btn_spy_rid_radio_on_clicked(){
    ui->tex_log->append(">> 对其广播");
    ui->lab_radio_rid_state->setText("正在广播");

    //udp_sock.transmitData("spyrid-(%s)-(0)-(1)",ui->le_spy_rid_set->text().toUtf8().constData());
    RadioProcess->start("ffmpeg -f dshow -i audio=\"麦克风 (Realtek(R) Audio)\" -acodec pcm_s16le -ac 1 -ar 16000 -f wav udp://192.168.1.6:1235");
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::on_btn_setting_clicked
///
void MainWindow::on_btn_spy_group_stop_clicked()
{

}

void MainWindow::on_btn_spy_group_out_clicked()
{

}
////////////////////////////////////////////////////////////////////////////////////////////////////
