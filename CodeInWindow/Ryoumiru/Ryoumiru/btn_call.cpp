#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vartable.h"
#include <sstream>

extern class udp_handshake udp_sock;
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::on_btn_call_call_clicked
///

void MainWindow::on_btn_call_call_clicked()
{
    // 使用字符串流构建消息
    udp_sock.transmitData("call-(%s)-(1)",ui->tex_call_rid->text().toUtf8().constData());

    player->setVideoOutput(ui->video_widget);
    player->setMedia(QUrl("qrc:/sdp/video.sdp"));
    //player->setMedia(QUrl("http://www.xerolyskinner.top/cat.mp4"));
    player->setVolume(30);
    player->play();

    //  监听启动
    on_btn_spy_rid_listen_clicked();
}

void MainWindow::on_btn_call_stop_clicked()
{
    udp_sock.transmitData("call-(%s)-(0)",ui->tex_call_rid->text().toUtf8().constData());

    player->stop();
    player->setMedia(QMediaContent());

    //  停止监听
    on_btn_spy_rid_stop_clicked();
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::on_btn_call_test_clicked
///
void MainWindow::on_btn_call_test_clicked()
{
    ui->lab_call_test->setText("识别中...");
    //  待定
}
////////////////////////////////////////////////////////////////////////////////////////////////////
