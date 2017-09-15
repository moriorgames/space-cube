#include "../../../app/MoriorGames/Entity/Cuboid.h"
#include "../../../app/MoriorGames/Entity/Coordinate.h"

using MoriorGames::Cuboid;

namespace RectangularCuboidTest {

TEST_CASE("RectangularCuboidDefaultConstructorTest", "Should be able to Construct RectangularCuboid")
{
    int height = 1, width = 2, depth = 3;

    auto cuboid = new Cuboid(height, width, depth);

    REQUIRE(cuboid->getHeight() == height);
    REQUIRE(cuboid->getWidth() == width);
    REQUIRE(cuboid->getDepth() == depth);
}

TEST_CASE("RectangularCuboidConstructorTest", "Should be able to Construct RectangularCuboid")
{
    int height = 1, width = 2, depth = 3;

    auto cuboid = new Cuboid(new Coordinate(0, 0, 0), height, width, depth);

    REQUIRE(cuboid->getHeight() == height);
    REQUIRE(cuboid->getWidth() == width);
    REQUIRE(cuboid->getDepth() == depth);
    REQUIRE(cuboid->getCoordinate()->getX() == 0);
}

TEST_CASE("RectangularCuboidPrintTest", "Should be able to Use Print on RectangularCuboid")
{
    int height = 1, width = 2, depth = 3;

    auto cuboid = new Cuboid(new Coordinate(0, 0, 0), height, width, depth);
    cuboid->print();
}

}
