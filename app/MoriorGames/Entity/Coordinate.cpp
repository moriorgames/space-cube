#include "Coordinate.h"

using MoriorGames::Coordinate;

Coordinate::Coordinate(int x, int y, int z)
    : x{x}, y{y}, z{z}
{
}

int Coordinate::getX() const
{
    return x;
}

int Coordinate::getY() const
{
    return y;
}

int Coordinate::getZ() const
{
    return z;
}
