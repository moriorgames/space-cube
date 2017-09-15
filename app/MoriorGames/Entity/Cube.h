#ifndef APP_MORIOR_GAMES_ENTITY_CUBE_H
#define APP_MORIOR_GAMES_ENTITY_CUBE_H

#include "RectangularCuboid.h"

namespace MoriorGames {

class Cube: public RectangularCuboid
{
public:
    Cube(Coordinate *, int size);

};

}

#endif
