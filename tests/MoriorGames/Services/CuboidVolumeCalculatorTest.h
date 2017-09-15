#include "../../../app/MoriorGames/Services/CuboidVolumeCalculator.h"

using MoriorGames::CuboidVolumeCalculator;

namespace CuboidVolumeCalculatorTest {

TEST_CASE("CuboidVolumeCalculatorTest1", "Should be able to get the resultant Volume occupied by a Cuboid")
{
    auto volumeCalc = new CuboidVolumeCalculator(new Cuboid(0, 0, 0));

    REQUIRE(volumeCalc->getVolume() == 0);
}

TEST_CASE("CuboidVolumeCalculatorTest2", "Should be able to get the resultant Volume occupied by a Cuboid")
{
    auto volumeCalc = new CuboidVolumeCalculator(new Cuboid(6, 5, 7));

    REQUIRE(volumeCalc->getVolume() == 210);
}

TEST_CASE("CuboidVolumeCalculatorTest3", "Should be able to get the resultant Volume occupied by a Cuboid")
{
    auto volumeCalc = new CuboidVolumeCalculator(new Cuboid(2, 7, 4));

    REQUIRE(volumeCalc->getVolume() == 56);
}

TEST_CASE("CuboidVolumeCalculatorTest4", "Should be able to get the resultant Volume occupied by a Cuboid")
{
    auto volumeCalc = new CuboidVolumeCalculator(new Cuboid(4, 2, 3));

    REQUIRE(volumeCalc->getVolume() == 24);
}

}
