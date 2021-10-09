# @file CMakeLists.txt
# 
# CMake files for Name

# Can be run by any version of CMake >= this
cmake_minimum_required(VERSION 3.10)

# project info
project(Names)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Source files for the main program Name_u
set(SOURCE Name_u.cpp Name.cpp)

# convert application
add_executable(Name_u ${SOURCE})

# Turn on warnings
if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # standard warnings
    add_compile_options(-Wall)
endif()

# run command
add_custom_target(run
        COMMENT "Run"
        COMMAND ./Name_u
        DEPENDS Name_u
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
