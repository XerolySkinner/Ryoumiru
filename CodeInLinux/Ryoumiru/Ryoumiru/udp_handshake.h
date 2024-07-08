#ifndef UDP_HANDSHAKE_H
#define UDP_HANDSHAKE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <iostream>
#include <QThread>
#include "varint.h"

#define BUF_SIZE 1024
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief The udp_handshake class
///
class udp_handshake{
public:
    udp_handshake();
    ~udp_handshake();

public:
    ssize_t recv_len;                                           //  字符接收数
    char buffer[BUF_SIZE];                                      //  字符缓冲区

    int sock;
    socklen_t addrlen;
    struct sockaddr_in *remote_addr;

public:
    int transmit(const char* ip,u16 port,u8* dat,u32 size);     //  发送信号
    int receive();                                              //  阻塞接收
};

bool containsString(const u8* buffer, size_t bufferSize, const char* searchString);
////////////////////////////////////////////////////////////////////////////////////////////////////
#endif // UDP_HANDSHAKE_H
