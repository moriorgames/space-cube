#ifndef APP_MORIOR_GAMES_SERVICES_CUBOID_VOLUME_CALCULATOR_H
#define APP_MORIOR_GAMES_SERVICES_CUBOID_VOLUME_CALCULATOR_H

#include "../Entity/Cuboid.h"

namespace MoriorGames {

class CuboidVolumeCalculator
{
public:
    explicit CuboidVolumeCalculator(Cuboid *);

private:

    Cuboid *cuboid;

public:
    int getVolume() const;

};

}

#endif
