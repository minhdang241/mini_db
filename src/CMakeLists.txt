cmake_minimum_required(VERSION 3.28)

set(CMAKE_CXX_STANDARD 17)
add_library(mini_db minidb.cpp)
target_include_directories(mini_db PUBLIC ${PROJECT_SOURCE_DIR}/src/include)
