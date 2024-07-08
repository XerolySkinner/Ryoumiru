#ifndef UDP_THREAD_H
#define UDP_THREAD_H
#include "mainwindow.h"
#include "udp_handshake.h"
#include <QProcess>
#include <cstring>
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief The udp_thread class
///
class udp_thread : public QThread{
    Q_OBJECT
public:
    udp_thread(QObject *parent = nullptr) : QThread(parent){
        AudioProcess = new QProcess;
        RadioProcess = new QProcess;
        VideoProcess = new QProcess;
    }

signals:
    void slot_lamp_on_all();
    void slot_lamp_off_all();
    void slot_air_on_all();
    void slot_air_off_all();

public:
    QProcess* AudioProcess;
    QProcess* RadioProcess;
    QProcess* VideoProcess;
    void spy_audio_func(u32 spy,u32 radio);
    void call_video_func(u32 state);

protected:
    void run() override;
};
////////////////////////////////////////////////////////////////////////////////////////////////////
#endif // UDP_THREAD_H
