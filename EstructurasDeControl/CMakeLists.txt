cmake_minimum_required(VERSION 3.30)
project(EstructurasDeControl)

set(CMAKE_CXX_STANDARD 20)

add_executable(EstructurasDeControl verificaPrimeraLetra.cpp)
add_executable(verificaPositivo verificaPositivo.cpp)
add_executable(verificaAprobado verificaAprobado.cpp)
add_executable(verificaCandidato verificaCandidato.cpp)
add_executable(evaluacionCalificacion evaluacionCalificacion.cpp)
