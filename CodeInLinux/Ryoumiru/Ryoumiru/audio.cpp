#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "udp_thread.h"
#include <QDebug>
#include "regenum.h"
////////////////////////////////////////////////////////////////////////////////////////////////////
/// Audio
void udp_thread::spy_audio_func(u32 spy,u32 radio){
    if(spy)AudioProcess->start("ffmpeg -f alsa -i default -acodec pcm_s16le -ac 1 -ar 16000 -f wav udp://192.168.1.4:1236");
    else AudioProcess->close();

    //if(radio)RadioProcess->start("/home/Ryoumiru_project/radio");
    //else RadioProcess->close();
}

void udp_thread::call_video_func(u32 state){
    return;

    if(state){
        spy_audio_func(1,0);}
    else{
        spy_audio_func(0,0);
    }


    if(state)VideoProcess->start("ffmpeg -f v4l2 -i /dev/video0 -pix_fmt yuv420p -preset ultrafast -tune zerolatency -f rtp rtp://192.168.1.4:1234");
    else VideoProcess->close();
}
////////////////////////////////////////////////////////////////////////////////////////////////////
