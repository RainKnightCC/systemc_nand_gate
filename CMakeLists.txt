cmake_minimum_required(VERSION 3.0)
project(test_systemc)

find_package(SystemCLanguage CONFIG REQUIRED)
set (CMAKE_CXX_STANDARD ${SystemC_CXX_STANDARD})

add_executable(test_systemc demo_sample2.cpp)
target_link_libraries(test_systemc SystemC::systemc)
