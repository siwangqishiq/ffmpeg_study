#include <iostream>

extern "C"
{
#include "libavutil/log.h"
#include "libavformat/avformat.h"
#include "libavdevice/avdevice.h"
#include "libavcodec/avcodec.h"
}

int main(){
    av_log_set_level(AV_LOG_ERROR);
    av_log(nullptr , AV_LOG_ERROR ,"%s \n你好 FFMPEG" , "Hello World!");
    int a;
    std::cin >> a;
    return 0;
}

