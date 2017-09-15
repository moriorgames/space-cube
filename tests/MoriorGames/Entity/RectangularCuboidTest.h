#include "../../../app/MoriorGames/Entity/RectangularCuboid.h"
#include "../../../app/MoriorGames/Entity/Coordinate.h"

using MoriorGames::RectangularCuboid;

namespace RectangularCuboidTest {

TEST_CASE("RectangularCuboidConstructorTest", "Should be able to Construct RectangularCuboid")
{
    int height = 1, width = 2, depth = 3;

    auto rectangularCuboid = new RectangularCuboid(new Coordinate(0, 0, 0), height, width, depth);

    REQUIRE(rectangularCuboid->getHeight() == height);
    REQUIRE(rectangularCuboid->getWidth() == width);
    REQUIRE(rectangularCuboid->getDepth() == depth);
    REQUIRE(rectangularCuboid->getCoordinate()->getX() == 0);
}

TEST_CASE("RectangularCuboidPrintTest", "Should be able to Use Print on RectangularCuboid")
{
    int height = 1, width = 2, depth = 3;

    auto rectangularCuboid = new RectangularCuboid(new Coordinate(0, 0, 0), height, width, depth);
    rectangularCuboid->print();
}

}
