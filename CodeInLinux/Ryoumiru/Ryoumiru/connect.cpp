#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "udp_thread.h"
#include "regenum.h"

extern class udp_thread udp;
extern class udp_handshake udp_sock;
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::init_connect
///
void MainWindow::init_connect(){
    connect(ui->btn_lamp_on, &QPushButton::clicked, this, [=]() {
        on_btn_elec_ctrl_clicked(elec_lamp,1);});
    connect(ui->btn_lamp_off, &QPushButton::clicked, this, [=]() {
        on_btn_elec_ctrl_clicked(elec_lamp,0);});
    connect(ui->btn_air_on, &QPushButton::clicked, this, [=]() {
        on_btn_elec_ctrl_clicked(elec_air,1);});
    connect(ui->btn_air_off, &QPushButton::clicked, this, [=]() {
        on_btn_elec_ctrl_clicked(elec_air,0);});

    connect(&udp, &udp_thread::slot_lamp_off_all, this, [=]() {
            on_btn_elec_ctrl_clicked(elec_lamp,0);});
    connect(&udp, &udp_thread::slot_lamp_on_all, this, [=]() {
            on_btn_elec_ctrl_clicked(elec_lamp,1);});
    connect(&udp, &udp_thread::slot_air_off_all, this, [=]() {
            on_btn_elec_ctrl_clicked(elec_air,0);});
    connect(&udp, &udp_thread::slot_air_on_all, this, [=]() {
            on_btn_elec_ctrl_clicked(elec_air,1);});
}
////////////////////////////////////////////////////////////////////////////////////////////////////
