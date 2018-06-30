cmake_minimum_required(VERSION 2.6)
project(write)

add_executable(write main.cpp)

install(TARGETS write RUNTIME DESTINATION bin)
