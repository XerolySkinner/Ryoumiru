#ifndef UDP_HANDSHAKE_H
#define UDP_HANDSHAKE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <QUdpSocket>
#include <QHostAddress>
#include <QNetworkDatagram>

#include "varint.h"

#define BUF_SIZE 1024
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief The udp_handshake class
///
class udp_handshake{
public:
    udp_handshake(u16 port);
    ~udp_handshake();
public:
    QUdpSocket *udpSocket;
public:
    int transmit(const char* ip,u16 port,u8* dat,u32 size);     //  发送信号
    int transmitstr(const char* ip,u16 port,const char* dat);   //  发送字符串
    int receive();                                              //  阻塞接收

    void transmitData(const char* format, ...);
};
////////////////////////////////////////////////////////////////////////////////////////////////////
#endif // UDP_HANDSHAKE_H
