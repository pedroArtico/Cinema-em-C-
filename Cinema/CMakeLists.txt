cmake_minimum_required(VERSION 3.5)
project(ProjPOO)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

set(SOURCE_FILES
        classes/Controller/controller.h
    classes/Data/Dataa.cpp
    classes/Data/Dataa.h
    classes/Filme/Filme.cpp
    classes/Filme/Filme.h
        classes/Funcionario/funcionario.h
        classes/Ingresso/ingresso.h
    sqlite3/sqlite3.c
    sqlite3/sqlite3.h
    main.cpp classes/Poltrona/Poltrona.cpp
        classes/Poltrona/Poltrona.h
        classes/Poltrona/Coordenada.cpp
        classes/Poltrona/Coordenada.h)

add_executable(ProjPOO ${SOURCE_FILES})