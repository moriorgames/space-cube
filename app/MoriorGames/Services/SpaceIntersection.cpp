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
    std::vector<int> intersectionPoints;

    for (int index1 = 0; index1 < size1; index1++) {
        for (int index2 = 0; index2 < size2; index2++) {
            if (index1 + axis1 == index2 + axis2 && !isPointInVector(index1 + axis1, intersectionPoints)) {
                intersectionPoints.push_back(index1 + axis1);
            }
        }
    }

    return (int) intersectionPoints.size();
}

int SpaceIntersection::isPointInVector(int point, std::vector<int> vector) const
{
    auto it = std::find_if(vector.begin(), vector.end(), [point](int vectorPoint)
    { return vectorPoint == point; });

    return it != vector.end();
}
