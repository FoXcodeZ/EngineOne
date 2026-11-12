cmake_minimum_required(VERSION 4.4)
project(EngineOne)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SDL3 REQUIRED)

add_executable(EngineOne main.cpp
        Application.cpp
        Application.hpp)
target_link_libraries(EngineOne SDL3::SDL3)