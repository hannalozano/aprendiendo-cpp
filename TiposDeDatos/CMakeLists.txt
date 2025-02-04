cmake_minimum_required(VERSION 3.30)
project(TiposDeDatos)

set(CMAKE_CXX_STANDARD 20)

add_executable(TiposDeDatos main.cpp)
add_executable(conversionTipos conversionTipos.cpp)
add_executable(conversionExplicita conversionExplicita.cpp)
add_executable(usoDeConstantes usoDeConstantes.cpp)
