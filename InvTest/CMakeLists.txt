cmake_minimum_required(VERSION 3.0.0)
project(LibraryInventory VERSION 0.1.0)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(InvTest InvTest01.cpp)

target_link_libraries(
  InvTest LINK_PUBLIC gtest_main
)
target_link_libraries(
  InvTest LINK_PUBLIC InvLib
)

include(GoogleTest)
gtest_discover_tests(InvTest)

#target_include_directories (InvTest PUBLIC "C://git//googletest//googletest//include")

target_include_directories (InvTest PUBLIC "..\\build\\_deps\\googletest-src\\googletest\\include")

