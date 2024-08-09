cmake_minimum_required(VERSION 3.28)

set(CMAKE_CXX_STANDARD 17)
add_executable(
        mini_db_tests
        dbmanagement_tests.cpp
        catch_amalgamated.hpp
        catch_amalgamated.cpp
)
target_link_libraries(mini_db_tests PUBLIC mini_db)

