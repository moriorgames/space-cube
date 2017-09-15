#ifndef APP_MORIOR_GAMES_ENTITY_COORDINATE_H
#define APP_MORIOR_GAMES_ENTITY_COORDINATE_H

#include <string>

namespace MoriorGames {

class Coordinate
{
public:
    Coordinate(int x, int y, int z);

private:

    int x = 0, y = 0, z = 0;

public:

    int getX() const;

    int getY() const;

    int getZ() const;

    void print()
    {
        printf("========= Coordinate: \n"
                   " - x %i\n"
                   " - y %i\n"
                   " - z %i\n"
                   " \n",
               x,
               y,
               z
        );
    }
};

}

#endif
