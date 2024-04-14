cmake_minimum_required(VERSION 3.29.2)
project(beep-me CXX)
set(VERSION "0.1.0")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(website "src/website.cpp")

target_include_directories(website PUBLIC
                           "libs/"
                           "include"
                           )

set(SOURCES "src/website.cpp" "src/website.cpp" ${YOUR_DIRECTORY}/file1.h ${YOUR_DIRECTORY}/file2.h)
add_executable(website ${SOURCES})

# ADD LIBRARIES