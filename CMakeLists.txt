cmake_minimum_required(VERSION 2.8)
project(list_palindrome_project)


set(CMAKE_CURRENT_BINARY_DIR /bin)
set(CMAKE_LIBRARY_PATH /lib)
set(LIST_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(LIST_BINARIES "${CMAKE_CURRENT_SOURCE_DIR}/bin")
set(LIST_LIBRARIES "${CMAKE_CURRENT_SOURCE_DIR}/lib")

include_directories("${LIST_INCLUDE}" gtest/)
link_directories(lib/)

add_subdirectory(samples)
add_subdirectory(lib)
add_subdirectory(tests)
