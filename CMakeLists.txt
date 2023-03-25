cmake_minimum_required(VERSION 3.24)
project(problem2try3)

set(CMAKE_CXX_STANDARD 20)

add_executable(problem2try3 main.cpp RingBuffer.cpp RingBuffer.hpp CustomException.hpp RBIterator.cpp RBIterator.hpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
        main
        main.cpp
)
target_link_libraries(
        main
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(main)