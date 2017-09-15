#include "../../../app/MoriorGames/Entity/Cube.h"

using MoriorGames::Cube;

namespace CubeTest {

TEST_CASE("CubeConstructorTest", "Should be able to Construct Cube")
{
    int size = 1;

    auto cube = new Cube(new Coordinate(0, 0, 0), size);

    REQUIRE(cube->getHeight() == size);
    REQUIRE(cube->getWidth() == size);
    REQUIRE(cube->getDepth() == size);
    REQUIRE(cube->getCoordinate()->getX() == 0);
}

}
