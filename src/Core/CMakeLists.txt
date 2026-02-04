cmake_minimum_required(VERSION 3.20)

project(FastFingersCore)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(FastFingersCore
    Application.cpp
    Application.hpp
    
    Entry.cpp
    Entry.hpp
    
    Helper.cpp
    Helper.hpp

    Error.hpp
)

target_link_libraries(FastFingersCore PRIVATE glfw glad glm spdlog)