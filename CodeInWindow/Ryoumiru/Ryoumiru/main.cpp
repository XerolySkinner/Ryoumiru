#include "vartable.h"
#include "mainwindow.h"
#include <QApplication>
#include "udp_thread.h"

udp_thread udp;
udp_handshake udp_sock(8888);
//udp_sock->receive();
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief qMain
/// \param argc
/// \param argv
/// \return
///
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    udp.start();

    udp_sock.transmitstr(RADIO_IP,8888,"MAIN ON");
    return a.exec();
}
////////////////////////////////////////////////////////////////////////////////////////////////////
