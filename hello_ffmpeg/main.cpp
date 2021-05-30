#include <iostream>

extern "C"
{
#include "libavutil/log.h"
}

int main(){
    //std::cout << "你好 世界 Hello ffmpeg" <<std::endl;
    av_log_set_level(AV_LOG_ERROR);
    av_log(nullptr , AV_LOG_ERROR ,"%s \n你好 FFMPEG" , "Hello World!");
    return 0;
}