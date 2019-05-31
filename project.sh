#!/bin/bash
if [ $# = 1 ]; then
    if [ $1 = "build" ] || [ $1 = "clean" ] || [ $1 = "make" ]; then
        if [ $1 = "build" ]; then
            rm -rf build
            rm -rf bin
            mkdir build
            mkdir bin
            cd build
            cmake ..
            make
            mv bomberman ../bin/bomberman
        elif [ $1 = "clean" ]; then
            cd build
            make clean
            cd ..
            rm -rf build
            rm -rf bin
        elif [ $1 = "make" ]; then
            cd build
            make
        fi
    else
        echo "./project.sh [ build | make | clean ]"
    fi
else
    echo "./project.sh [ build | make | clean ]"
fi
