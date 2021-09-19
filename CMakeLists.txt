cmake_minimum_required(VERSION 3.0.0)
project(LibraryInventory VERSION 0.1.0)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

#include(CTest)
#enable_testing()

add_subdirectory(InvTest)
add_subdirectory(LibraryApp)
add_subdirectory(InvLib)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
