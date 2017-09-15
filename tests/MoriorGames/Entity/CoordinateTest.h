#include "../../../app/MoriorGames/Entity/Coordinate.h"

using MoriorGames::Coordinate;

namespace CoordinateTest {

TEST_CASE("CoordinateConstructorTest", "Should be able to Construct Coordinate")
{
    int x = 1, y = 2, z = 3;

    auto coordinate = new Coordinate(x, y, z);

    REQUIRE(coordinate->getX() == x);
    REQUIRE(coordinate->getY() == y);
    REQUIRE(coordinate->getZ() == z);
}

}
