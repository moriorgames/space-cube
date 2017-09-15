#ifndef APP_MORIOR_GAMES_ENTITY_RECTANGULAR_CUBOID_H
#define APP_MORIOR_GAMES_ENTITY_RECTANGULAR_CUBOID_H

#include "Coordinate.h"

namespace MoriorGames {

class RectangularCuboid
{
public:
    RectangularCuboid(Coordinate *, int height, int width, int depth);

protected:

    Coordinate *coordinate;
    int height = 0, width = 0, depth = 0;

public:

    Coordinate *getCoordinate() const;

    int getHeight() const;

    int getWidth() const;

    int getDepth() const;

    void print()
    {
        printf("========= RectangularCuboid: \n"
                   " - height %i\n"
                   " - width %i\n"
                   " - depth %i\n"
                   " \n",
               height,
               width,
               depth
        );
        coordinate->print();
    }
};

}

#endif
