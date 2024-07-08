#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "udp_thread.h"

extern class udp_thread udp;
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::MainWindow
/// \param parent
///
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer;
    AudioProcess = new QProcess;
    RadioProcess = new QProcess;

    init_connect();
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::~MainWindow
///
MainWindow::~MainWindow()
{
    qDebug()<<"Window Exit";
    emit udp.stopThread();
    delete ui;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
