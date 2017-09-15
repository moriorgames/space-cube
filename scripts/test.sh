#!/usr/bin/env bash

# Remove previous build files
rm -rf build/main

# Build and execute the tests
g++ -std=c++11 -g -o build/main \
app/MoriorGames/Entity/Coordinate.cpp \
app/MoriorGames/Entity/Cube.cpp \
app/MoriorGames/Entity/Cuboid.cpp \
app/MoriorGames/Services/CuboidVolumeCalculator.cpp \
app/MoriorGames/Services/SpaceIntersection.cpp \
main.cpp

./build/main
