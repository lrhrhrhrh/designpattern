cmake_minimum_required(VERSION 3.10)
project(singletonPattern)

set(CXX_STANDARD 11)

set(FILES main.cpp Observer.h Subject.h RoomMate.h RoomMate.cpp QQGroup.cpp QQGroup.h)

add_executable(demo ${FILES})