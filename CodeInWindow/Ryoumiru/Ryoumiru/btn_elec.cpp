#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vartable.h"
#include <sstream>

extern class udp_handshake udp_sock;
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::on_btn_elec_all_lamp_on_clicked
///
void MainWindow::on_btn_elec_clicked(const char* obj,const char* rid,const char* state){
    udp_sock.transmitData("%s-(%s)-%s",obj,rid,state);
}
////////////////////////////////////////////////////////////////////////////////////////////////////
