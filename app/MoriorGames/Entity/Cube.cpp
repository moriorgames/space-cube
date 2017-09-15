#include "Cube.h"

using MoriorGames::Cube;

Cube::Cube(int size)
    : Cuboid(size, size, size)
{
}

Cube::Cube(Coordinate *coordinate, int size)
    : Cuboid(coordinate, size, size, size)
{
}

