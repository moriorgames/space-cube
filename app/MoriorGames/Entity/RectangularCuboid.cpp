#include "RectangularCuboid.h"

using MoriorGames::RectangularCuboid;
using MoriorGames::Coordinate;

RectangularCuboid::RectangularCuboid(Coordinate *coordinate, int height, int width, int depth)
    : coordinate{coordinate}, height{height}, width{width}, depth{depth}
{
}

Coordinate *RectangularCuboid::getCoordinate() const
{
    return coordinate;
}

int RectangularCuboid::getHeight() const
{
    return height;
}

int RectangularCuboid::getWidth() const
{
    return width;
}

int RectangularCuboid::getDepth() const
{
    return depth;
}
