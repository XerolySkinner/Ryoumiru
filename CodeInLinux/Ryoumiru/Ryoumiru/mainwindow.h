#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "varint.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief The MainWindow class
///
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
//--------------------------------------------------------------------------------------------------
public:
    u32 rid;                                //  宿舍号
    const char* group;                      //  宿舍组
    void rid_set(u32 rid);
public:
    void init_connect();
public:
    void on_btn_elec_ctrl_clicked(u32 obj,bool state);
};
////////////////////////////////////////////////////////////////////////////////////////////////////
#endif // MAINWINDOW_H
