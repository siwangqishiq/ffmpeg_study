CC := g++

SRC_DIR := .
BUILD_DIR := ../build
STD := c++11

build_dir:
	mkdir -p ${BUILD_DIR}

compile: build_dir ${BUILD_DIR}/main.o 

${BUILD_DIR}/main.o:${SRC_DIR}/main.cpp
	${CC} -std=${STD} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o -I ../include/

link:compile
	${CC} ${BUILD_DIR}/*.o -o ${BUILD_DIR}/main.exe -L../lib -lavcodec -lavdevice -lavfilter -lavformat -lavutil -lswresample -lswscale
	
run:link
	${BUILD_DIR}/main

clean:
	rm -f ${BUILD_DIR}/*.o 
	rm -f ${BUILD_DIR}/main.exe