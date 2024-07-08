#ifndef UDP_THREAD_H
#define UDP_THREAD_H
#include "vartable.h"
#include "mainwindow.h"
#include <QThread>

extern class udp_handshake udp_sock;
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief The udp_thread class
///
class udp_thread : public QThread{
    Q_OBJECT
public:
    udp_thread(QObject *parent = nullptr) : QThread(parent){}
signals:
    void stopThread();

protected:
    void run() override;
};
////////////////////////////////////////////////////////////////////////////////////////////////////
#endif // UDP_THREAD_H
