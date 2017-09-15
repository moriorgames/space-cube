#include "Cube.h"

using MoriorGames::Cube;

Cube::Cube(Coordinate *coordinate, int size)
    : RectangularCuboid(coordinate, size, size, size)
{
}
