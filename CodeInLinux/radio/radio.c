#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "cas_alsa.h"
////////////////////////////////////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------------------------------------
//  设置值
#define PORT 1235
#define BUFFER_SIZE 4096
const char device[]={"plughw:0,0"};

void error(const char *msg) {
    perror(msg);
    exit(1);
}
////////////////////////////////////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------------------------------------
//  main
int main() {
    int sockfd, n;
    struct sockaddr_in servaddr;
    socklen_t len;
    char buffer[BUFFER_SIZE];

    cas_alsa_ptr snd_device=cas_alsa_init(device,1,16000);

    // 创建 UDP 套接字
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        error("socket creation failed");
    }

    // 设置服务器地址信息
    bzero((char *) &servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);   // 本机任意IP地址
    servaddr.sin_port = htons(PORT);                // 端口号1235

    // 将套接字绑定到指定地址
    if (bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr)) < 0) {
        error("bind failed");
    }

    printf("Listening on UDP port %d...\n", PORT);
//--------------------------------------------------------------------------------------------------
    while (1) {
        len = sizeof(servaddr);
        n = recvfrom(sockfd, buffer, BUFFER_SIZE, MSG_WAITALL, (struct sockaddr *)&servaddr, &len);
        if (n < 0)error("recvfrom failed");

        // 写入音频数据
        cas_alsa_input(snd_device,buffer,n/2);
    }
    cas_alsa_kill(snd_device);
    close(sockfd);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
