cmake_minimum_required(VERSION 3.20)

project(FastFingers)

add_executable(FastFingers
    main.cpp
)

target_link_libraries(FastFingers PRIVATE FastFingersCore glfw glm glad spdlog)
target_include_directories(FastFingers PRIVATE 
    ..
)