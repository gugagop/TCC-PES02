cmake_minimum_required(VERSION 3.10)

project(TCC_PES02)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files to the project
set(SOURCES
    app/main.c
    ../src/interface/interface.c
)

set(DIRECTORIES
    ../src/interface
)

# Add header files to the project
set(HEADERS
    ../src/interface/interface.h
)

include_directories(${DIRECTORIES})

# Create the executable
add_executable(wcetCalculator ${SOURCES})