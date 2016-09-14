cmake_minimum_required(VERSION 2.8.9)
project(ListaC)

include_directories(include)

set(SOURCES src/Nodo.cpp src/main.cpp src/ListaC.cpp)

add_executable(listaC ${SOURCES})