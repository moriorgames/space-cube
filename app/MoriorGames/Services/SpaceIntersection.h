#ifndef APP_MORIOR_GAMES_SERVICES_SPACE_INTERSECTION_H
#define APP_MORIOR_GAMES_SERVICES_SPACE_INTERSECTION_H

#include "../Entity/Cuboid.h"

namespace MoriorGames {

class SpaceIntersection
{
public:
    explicit SpaceIntersection(Cuboid *, Cuboid *);

private:

    Cuboid *cuboid1, *cuboid2;

public:
    Cuboid *getResultantCuboid() const;

};

}

#endif
