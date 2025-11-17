cmake_minimum_required(VERSION 3.16)
project(ProjetBibliotheque CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Release)

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB SRC
    ${CMAKE_SOURCE_DIR}/src/*.cpp
)

add_executable(projet_biblio ${SRC})
