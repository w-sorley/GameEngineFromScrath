cmake_minimum_required(VERSION 3.1)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)
project(GameEngine VERSION 0.1.0)
include_directories("${PROJECT_SOURCE_DIR}/Framework/Common")
include_directories("${PROJECT_SOURCE_DIR}/Framework/Interface")
# CMake的递归搜索
add_subdirectory(Framework)
add_subdirectory(Empty)