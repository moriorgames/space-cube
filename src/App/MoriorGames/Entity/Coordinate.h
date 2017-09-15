#ifndef APP_MORIOR_GAMES_ENTITY_COORDINATE_H
#define APP_MORIOR_GAMES_ENTITY_COORDINATE_H

namespace MoriorGames {

class Coordinate
{
public:
    Coordinate();

private:

    int x = 0, y = 0, z = 0;

public:

    void print()
    {
        printf("========= Coordinate: \n"
                   " - x %i\n"
                   " - y %i\n"
                   " - z %i\n"
                   " \n",
               id,
               battleSetId,
               cardId,
               level,
               x,
               y,
               z,
        );
    }
};

}

#endif
