#include "cas_alsa.h"
////////////////////////////////////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------------------------------------
//  初始化
cas_alsa_ptr cas_alsa_init(
        const char* device,
        unsigned int channels,
        unsigned int sample_rate){
    cas_alsa_ptr obj=malloc(sizeof(struct cas_alsa));
    if (snd_pcm_open(&obj->handle,device, SND_PCM_STREAM_PLAYBACK, 0) < 0);

    snd_pcm_hw_params_alloca(&obj->params);
    snd_pcm_hw_params_any(obj->handle, obj->params);

    snd_pcm_hw_params_set_access(obj->handle, obj->params, SND_PCM_ACCESS_RW_INTERLEAVED);
    snd_pcm_hw_params_set_format(obj->handle, obj->params, SND_PCM_FORMAT_S16_LE);
    snd_pcm_hw_params_set_channels(obj->handle, obj->params, channels);
    snd_pcm_hw_params_set_rate_near(obj->handle, obj->params, &sample_rate, &obj->dir);

    snd_pcm_hw_params(obj->handle, obj->params);

    return obj;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------------------------------------
//  初始化
int cas_alsa_kill(cas_alsa_ptr obj){
    snd_pcm_drain(obj->handle);
    snd_pcm_close(obj->handle);
    return CAS_ALSA_OK;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------------------------------------
//  初始化
int cas_alsa_input(cas_alsa_ptr obj,char* buffer,unsigned int n){
    int res=0;
    res = snd_pcm_writei(obj->handle,buffer,n);
    if (res == -EPIPE) {
        if (snd_pcm_prepare(obj->handle) < 0);
        }
    return res;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
