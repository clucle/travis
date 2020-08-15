cmake_minimum_required(VERSION 3.5)

project(travis)

enable_testing()

include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/src
)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(test)