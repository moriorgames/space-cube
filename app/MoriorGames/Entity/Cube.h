#ifndef APP_MORIOR_GAMES_ENTITY_CUBE_H
#define APP_MORIOR_GAMES_ENTITY_CUBE_H

#include "Cuboid.h"

namespace MoriorGames {

class Cube: public Cuboid
{
public:
    Cube(int size);

    Cube(Coordinate *, int size);

};

}

#endif
