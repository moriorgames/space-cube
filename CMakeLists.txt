cmake_minimum_required(VERSION 3.8)
project(SpaceCube)

set(CMAKE_CXX_STANDARD 11)

# Add the Specific Classes of the project recursively
file(GLOB_RECURSE app/MoriorGames "*.h" "*.cpp")

set(SOURCE_FILES main.cpp)

add_executable(SpaceCube ${SOURCE_FILES} ${app/MoriorGames})
