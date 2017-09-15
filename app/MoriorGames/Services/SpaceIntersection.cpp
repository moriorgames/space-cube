#include "SpaceIntersection.h"

using MoriorGames::SpaceIntersection;
using MoriorGames::Cuboid;

SpaceIntersection::SpaceIntersection(Cuboid *cuboid1, Cuboid *cuboid2)
    : cuboid1{cuboid1}, cuboid2{cuboid2}
{
}

Cuboid *SpaceIntersection::getResultantCuboid() const
{
    return new Cuboid(new Coordinate(0, 0, 0), 0, 0, 0);
}
