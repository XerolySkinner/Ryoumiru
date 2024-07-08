#include "udp_handshake.h"
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief udp_handshake::udp_handshake
///
udp_handshake::udp_handshake(){
    remote_addr = new struct sockaddr_in;
    // 创建UDP套接字
    sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (sock == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    int on = 1;
    if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR | SO_BROADCAST, &on, sizeof(on)) == -1) {
        perror("setsockopt() error");
    }

    // 设置本地地址和端口
    struct sockaddr_in local_addr;
    memset(&local_addr, 0, sizeof(local_addr));
    local_addr.sin_family = AF_INET;
    local_addr.sin_port = htons(8888);  // 选择一个空闲的端口
    local_addr.sin_addr.s_addr = INADDR_ANY;

    // 将套接字绑定到本地地址和端口
    if (bind(sock, (struct sockaddr*)&local_addr, sizeof(local_addr)) == -1) {
        perror("bind");
        close(sock);
        exit(EXIT_FAILURE);
    }

}
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief udp_handshake::~udp_handshake
///
udp_handshake::~udp_handshake(){
    // 关闭套接字
    close(sock);
    delete remote_addr;
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
    // 发送数据
    struct sockaddr_in dest_addr;
    memset(&dest_addr, 0, sizeof(dest_addr));
    dest_addr.sin_family = AF_INET;
    dest_addr.sin_port = htons(port);
    inet_pton(AF_INET,ip, &dest_addr.sin_addr);

    if (sendto(sock,dat,size, 0, (struct sockaddr*)&dest_addr, sizeof(dest_addr)) == -1) {
        perror("sendto");
        close(sock);
        exit(EXIT_FAILURE);
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief udp_handshake::receive
/// \return
///
int udp_handshake::receive() {
    // 清空接收缓冲区
    memset(buffer, 0, sizeof(buffer));
    addrlen = sizeof(*remote_addr);
    // 接收数据
    recv_len = recvfrom(sock, buffer, sizeof(buffer), 0, (struct sockaddr*)remote_addr, &addrlen);
    if (recv_len == -1) {
        perror("recvfrom");
        close(sock);
        exit(EXIT_FAILURE);}

    buffer[recv_len] = '\0';                    //  字符串补位
    printf("Received message: %s", buffer);
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief containsString
/// \param buffer
/// \param bufferSize
/// \param searchString
/// \return
///
bool containsString(const u8* buffer, size_t bufferSize, const char* searchString){
    return std::string(reinterpret_cast<const char*>(buffer), bufferSize).find(searchString) != std::string::npos;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
