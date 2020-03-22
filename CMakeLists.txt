cmake_minimum_required(VERSION 3.10)
project(network C)

set(CMAKE_C_STANDARD 11)

add_executable(network
        hello_world.c make_socket.c)
