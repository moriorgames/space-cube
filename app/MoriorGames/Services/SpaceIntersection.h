#ifndef APP_MORIOR_GAMES_SERVICES_SPACE_INTERSECTION_H
#define APP_MORIOR_GAMES_SERVICES_SPACE_INTERSECTION_H

#include <vector>
#include "../Entity/Cube.h"

namespace MoriorGames {

class SpaceIntersection
{
public:
    explicit SpaceIntersection(Cube *, Cube *);

private:

    Cube *cube1, *cube2;

public:
    Cuboid *getResultantCuboid() const;

private:
    int getHeightIntersection() const;

    int getWidthIntersection() const;

    int getDepthIntersection() const;

    int getIntersectionSize(int size1, int size2, int axis1, int axis2) const;

    int isPointInVector(int point, std::vector<int> vector) const;

};

}

#endif
