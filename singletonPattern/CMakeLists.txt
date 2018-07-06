cmake_minimum_required(VERSION 3.10)
project(singletonPattern)

set(CXX_STANDARD 11)

set(FILES main.cpp Singleton.h Singleton.cpp)

add_executable(demo ${FILES})