cmake_minimum_required(VERSION 2.6)
project(cpp11)

# Define Variables
set(WITH_TEST ON CACHE BOOL "Enable Test")

# Settings
if(CMAKE_COMPILER_IS_GNUCXX)
  set(CMAKE_CXX_FLAGS "-std=c++11")
endif(CMAKE_COMPILER_IS_GNUCXX)

# System Checking
if(WITH_TEST)
  message(STATUS "Test is Enabled")

  enable_testing()
  find_package(GTest REQUIRED)
endif(WITH_TEST)

add_subdirectory(src bin)
add_subdirectory(test test)

