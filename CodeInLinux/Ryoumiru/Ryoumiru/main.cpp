#include "mainwindow.h"
#include "vartable.h"
#include <QApplication>
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief udp_sock
///
udp_handshake udp_sock;
udp_thread udp;
MainWindow *window;
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief main
/// \param argc
/// \param argv
/// \return
///
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.rid_set(326);


    window=&w;

    udp.start();

    return a.exec();
}
////////////////////////////////////////////////////////////////////////////////////////////////////
