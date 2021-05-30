#include <iostream>

extern "C"
{
#include "libavutil/log.h"
#include "libavformat/avformat.h"
#include "libavdevice/avdevice.h"
#include "libavcodec/avcodec.h"
}

int main(){
    //std::cout << "你好 世界 Hello ffmpeg" <<std::endl;
    //avdevice_register_all();
    std::string congfigure;
    congfigure = avcodec_configuration();
    std::cout << congfigure << std::endl;

    avdevice_register_all();

    avformat_network_init();

    AVFormatContext *context = nullptr;
    const char *path = "e://assets/v2.mp4";
    int ret = avformat_open_input(&context , path , nullptr , nullptr);
    
    if(ret == 0){
        std::cout << "open file " << path << " success " <<std::endl;
    }else{
        std::cout << "open failed!! "<< std::endl;
    }

    avformat_network_deinit();
    return 0;
}

