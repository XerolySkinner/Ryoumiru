#include "udp_thread.h"
#include <stdio.h>
#include <QDebug>

extern class MainWindow *window;
extern class udp_handshake udp_sock;
//////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------------
void udp_thread::run(){
    u32 res;
    u32 number;
    u32 number1;
    while(1){
        udp_sock.receive();
        //printf("%s",udp_sock.buffer);
//----------------------------------------------------------------------------------------------------
//  Elect
        if(containsString((const u8*)udp_sock.buffer,udp_sock.recv_len,"elecall$lamp-(all)-1"))emit slot_lamp_on_all();
        if(containsString((const u8*)udp_sock.buffer,udp_sock.recv_len,"elecall$lamp-(all)-0"))emit slot_lamp_off_all();
        if(containsString((const u8*)udp_sock.buffer,udp_sock.recv_len,"elecall$air-(all)-1"))emit slot_air_on_all();
        if(containsString((const u8*)udp_sock.buffer,udp_sock.recv_len,"elecall$air-(all)-0"))emit slot_air_off_all();

        if(containsString((const u8*)udp_sock.buffer,udp_sock.recv_len,"elecrid$lamp")){
            if((res=sscanf(udp_sock.buffer, "elecrid$lamp-(%d)", &number)),(number==window->rid && res>0)){
                ((res=sscanf(udp_sock.buffer, "elecrid$lamp-(326)-%d", &number)),(number && res>0))?
                    emit slot_lamp_on_all():emit slot_lamp_off_all();
                }
            }

        if(containsString((const u8*)udp_sock.buffer,udp_sock.recv_len,"elecrid$air")){
            if((res=sscanf(udp_sock.buffer, "elecrid$air-(%d)", &number)),(number==window->rid && res>0)){
                ((res=sscanf(udp_sock.buffer, "elecrid$air-(326)-%d", &number)),(number && res>0))?
                    emit slot_air_on_all():emit slot_air_off_all();
                }
            }
//----------------------------------------------------------------------------------------------------
//  Audio
        if(containsString((const u8*)udp_sock.buffer,udp_sock.recv_len,"spyrid")){
            if((res=sscanf(udp_sock.buffer, "spyrid-(%d)", &number)),(number==window->rid && res>0)){
                if((res=sscanf(udp_sock.buffer, "spyrid-(326)-(%d)-(%d)", &number,&number1)),(res>0)){
                    spy_audio_func(number,number1);
                    }
                }
            }
//----------------------------------------------------------------------------------------------------
//  Video

        if(containsString((const u8*)udp_sock.buffer,udp_sock.recv_len,"CALL")){
            call_video_func(1);
            /*if((res=sscanf(udp_sock.buffer, "CALL-(%d)", &number)),(number==window->rid && res>0)){
                qDebug()<<"CALL2";
                if((res=sscanf(udp_sock.buffer, "call-(326)-(%d)", &number)),(res>0)){
                    qDebug()<<"CALL3";
                    call_video_func(number);
                    }
                }
                */
            }
//----------------------------------------------------------------------------------------------------
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
