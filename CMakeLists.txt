cmake_minimum_required(VERSION 3.20)

project(FastFingersBase)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(outside/glad)
add_subdirectory(outside/glfw)
add_subdirectory(outside/spdlog)
add_subdirectory(outside/glm)

add_subdirectory(src)