#include "SpaceIntersection.h"
#include <cstdlib>

using MoriorGames::SpaceIntersection;
using MoriorGames::Cuboid;
using MoriorGames::Cube;

SpaceIntersection::SpaceIntersection(Cube *cube1, Cube *cube2)
    : cube1{cube1}, cube2{cube2}
{
}

Cuboid *SpaceIntersection::getResultantCuboid() const
{
    auto cuboid = new Cuboid(0, 0, 0);
    int height = getHeightIntersection();
    int width = getWidthIntersection();
    int depth = getDepthIntersection();

    if (height > 0 && width > 0 && depth > 0) {
        cuboid = new Cuboid(height, width, depth);
    }

    return cuboid;
}

int SpaceIntersection::getHeightIntersection() const
{
    return getIntersectionSize(
        cube1->getHeight(), cube2->getHeight(), cube1->getCoordinate()->getY(), cube2->getCoordinate()->getY()
    );
}

int SpaceIntersection::getWidthIntersection() const
{
    return getIntersectionSize(
        cube1->getWidth(), cube2->getWidth(), cube1->getCoordinate()->getX(), cube2->getCoordinate()->getX()
    );
}

int SpaceIntersection::getDepthIntersection() const
{
    return getIntersectionSize(
        cube1->getDepth(), cube2->getDepth(), cube1->getCoordinate()->getZ(), cube2->getCoordinate()->getZ()
    );
}

int SpaceIntersection::getIntersectionSize(int size1, int size2, int axis1, int axis2) const
{
    if (size1 > 0 && size2 > 0) {

        int maxSize;

        if (size1 < size2) {
            maxSize = size1;
        } else {
            maxSize = size2;
        }

        int distance = absoluteValueDistance(axis1, axis2);

        return maxSize - distance;

    } else {

        return 0;
    }
}

int SpaceIntersection::absoluteValueDistance(int number1, int number2) const
{
    int distance = 0;
    if ((number1 > 0 && number2 > 0) || (number1 <= 0 && number2 <= 0)) {

        distance = abs(abs(number1) - abs(number2));
    } else {
        if (number1 < number2) {
            distance = number2 + abs(number1);
        } else {
            distance = number1 + abs(number2);
        }
    }

    return distance;
}
