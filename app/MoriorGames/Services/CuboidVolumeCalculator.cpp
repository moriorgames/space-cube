#include "CuboidVolumeCalculator.h"

using MoriorGames::CuboidVolumeCalculator;

CuboidVolumeCalculator::CuboidVolumeCalculator(Cuboid *cuboid)
    : cuboid{cuboid}
{
}

int CuboidVolumeCalculator::getVolume() const
{
    return cuboid->getHeight() * cuboid->getWidth() * cuboid->getDepth();
}
