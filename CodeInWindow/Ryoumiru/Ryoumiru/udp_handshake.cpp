#include "udp_handshake.h"
#include "vartable.h"
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief udp_handshake::udp_handshake
///
udp_handshake::udp_handshake(u16 port) {
    // 创建 UDP 套接字
    udpSocket = new QUdpSocket;
    // 绑定套接字到本地地址和端口
    if (!udpSocket->bind(QHostAddress::Any, port)) {
        qDebug() << "Failed to bind UDP socket";
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief udp_handshake::~udp_handshake
///
udp_handshake::~udp_handshake(){
    delete udpSocket;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief udp_handshake::transmit
/// \param ip
/// \param port
/// \param dat
/// \param size
/// \return
///
int udp_handshake::transmit(const char* ip,u16 port,u8* dat,u32 size){
    udpSocket->writeDatagram(reinterpret_cast<const char*>(dat), size, QHostAddress(ip), port);
    return 0;
}

int udp_handshake::transmitstr(const char* ip,u16 port,const char* dat){
    udpSocket->writeDatagram(reinterpret_cast<const char*>(dat), strlen(dat), QHostAddress(ip), port);
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief udp_handshake::receive
/// \return
///
int udp_handshake::receive(){
    if (udpSocket->waitForReadyRead(-1)) { // 等待数据可读，-1表示无限期等待
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size());
        qDebug() << "Received message:" << datagram;
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief udp_handshake::transmitData
/// \param format
///
void udp_handshake::transmitData(const char* format, ...){
    // 使用可变参数列表来处理参数
    va_list args;
    va_start(args, format);
    // 使用 std::stringstream 构建字符串流
    std::stringstream ss;
    // 使用 vsnprintf 获取格式化后的字符串
    char buffer[1024];
    vsnprintf(buffer, sizeof(buffer), format, args);
    // 完成可变参数列表的处理
    va_end(args);
    // 直接传递给 transmitstr 函数
    transmitstr(RADIO_IP, 8888, buffer);
}
////////////////////////////////////////////////////////////////////////////////////////////////////

