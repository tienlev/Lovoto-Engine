cmake_minimum_required(VERSION 3.10)

project(lovoto)

set(CMAKE_CXX_STANDARD 11)

add_executable(lovoto
    src/main.cpp
    src/core/engine.cpp
    src/graphics/renderer.cpp
    # Thêm các tệp mã nguồn khác ở đây
)