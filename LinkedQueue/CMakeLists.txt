cmake_minimum_required(VERSION 3.26)
project(LinkedQueue)

set(CMAKE_CXX_STANDARD 17)

add_executable(LinkedQueue main.cpp
        LinkedQueue.cpp
        LinkedQueue.h)
