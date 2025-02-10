cmake_minimum_required(VERSION 3.10)

# Set the project name
project(PIMPL)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the executable
add_executable(PIMPL ${SOURCES})

# Include directories
include_directories(include)