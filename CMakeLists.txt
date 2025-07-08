cmake_minimum_required(VERSION 3.10)

project(template_cmake)

find_package(fmt REQUIRED)

add_subdirectory(src/core)
add_subdirectory(src/app)
