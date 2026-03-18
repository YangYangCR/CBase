cmake_minimum_required(VERSION 4.1)
project(dor)

set(CMAKE_CXX_STANDARD 20)

add_executable(dor main.cpp
        first.cpp
        add.cpp
        add.h
        sizeof_demo.cpp
        sizeof_demo.h
        namespace/goo.cpp
        namespace/foo.cpp
        namespace/foo.h
        namespace/goo.h
        namespace/constants.h
        chapter12/chap12.cpp
        chapter14/chap14.cpp
)
