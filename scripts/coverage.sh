#!/usr/bin/env bash

# Remove previous build files
rm -rf build/main
rm -rf *.gcda
rm -rf *.gcno
rm -rf coverage/index*
touch coverage/index.html

# Build and execute the tests
g++ -std=c++11 -o build/main \
--coverage \
app/MoriorGames/Entity/Coordinate.cpp \
app/MoriorGames/Entity/Cube.cpp \
app/MoriorGames/Entity/Cuboid.cpp \
app/MoriorGames/Services/CuboidVolumeCalculator.cpp \
app/MoriorGames/Services/SpaceIntersection.cpp \
main.cpp

./build/main

# Generate the coverage report with some options
# 'Html' output with 'HtmlDetails'. 'Summary' at the end and to 'Output' file
gcovr -r $(pwd) --html --html-details -s \
--exclude 'Mocks' --exclude 'tests' --exclude 'cocos2d' --exclude 'catch.hpp' \
-o "$(pwd)/coverage/index.html"

# Clean project after generating the coverage
rm -rf *.gcda
rm -rf *.gcno
