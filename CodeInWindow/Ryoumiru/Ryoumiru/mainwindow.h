#ifndef MAINWINDOW_H
#define MAINWINDOW_H
////////////////////////////////////////////////////////////////////////////////////////////////////
#include <QMainWindow>

#include <QtMultimedia/QtMultimedia>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QFileDialog>
#include <QByteArray>
#include <QUrl>
#include <QHostAddress>
#include <QDebug>
#include <sstream>

#include "udp_handshake.h"

#include "varint.h"
////////////////////////////////////////////////////////////////////////////////////////////////////
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
    void init_connect();
    void handleStateChanged(QMediaPlayer::State state);

public:
    QMediaPlayer *player;
    QProcess* AudioProcess;
    QProcess* RadioProcess;

public:
    void on_btn_elec_clicked(const char* obj,const char* rid,const char* state);

private slots:
    void on_btn_call_call_clicked();
    void on_btn_call_stop_clicked();
    void on_btn_setting_clicked();

    void on_btn_spy_rid_stop_clicked();
    void on_btn_spy_rid_listen_clicked();
    void on_btn_spy_rid_radio_stop_clicked();
    void on_btn_spy_rid_radio_on_clicked();

    void on_btn_spy_group_stop_clicked();
    void on_btn_spy_group_out_clicked();

    void on_btn_call_test_clicked();
};
#endif // MAINWINDOW_H
////////////////////////////////////////////////////////////////////////////////////////////////////
