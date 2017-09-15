#include "Cuboid.h"

using MoriorGames::Cuboid;
using MoriorGames::Coordinate;

Cuboid::Cuboid(int height, int width, int depth)
    : height{height}, width{width}, depth{depth}
{
    coordinate = new Coordinate(0, 0, 0);
}

Cuboid::Cuboid(Coordinate *coordinate, int height, int width, int depth)
    : coordinate{coordinate}, height{height}, width{width}, depth{depth}
{
}

Coordinate *Cuboid::getCoordinate() const
{
    return coordinate;
}

int Cuboid::getHeight() const
{
    return height;
}

int Cuboid::getWidth() const
{
    return width;
}

int Cuboid::getDepth() const
{
    return depth;
}

