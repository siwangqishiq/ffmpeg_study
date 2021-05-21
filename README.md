# ffmpeg_study
ffmpeg学习


### Windows环境下编译新版ffmpeg
1.安装MSYS2  https://www.msys2.org/

2.进入msys2下 mingw64 利用pacman安装
    pacman -Syu 更新pcman
    pacman -S make
    pacman -S gcc
    pacman -S mingw-w64-x86_64-toolchain
    pacman -S base-devel
    pacman -S yasm
    pacman -S mingw-w64-x86_64-SDL2

3.cd ffmpeg/

4. ./configure 

5. make

