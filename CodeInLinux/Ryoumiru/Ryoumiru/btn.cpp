#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "regenum.h"
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::on_btn_elec_ctrl_clicked
/// \param obj
/// \param state
///
void MainWindow::on_btn_elec_ctrl_clicked(u32 obj,bool state){
    switch (obj){
        case elec_all:
            ui->lab_lamp->setPixmap(QPixmap(state?":/img/res/lamp_on.png":":/img/res/lamp_off.png"));
            ui->lab_air->setPixmap(QPixmap(state?":/img/res/lamp_on.png":":/img/res/lamp_off.png"));
            break;
        case elec_lamp:
            ui->lab_lamp->setPixmap(QPixmap(state?":/img/res/lamp_on.png":":/img/res/lamp_off.png"));
            break;
        case elec_air:
            ui->lab_air->setPixmap(QPixmap(state?":/img/res/lamp_on.png":":/img/res/lamp_off.png"));
            break;
        default:break;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////
