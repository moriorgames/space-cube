#include "../../../app/MoriorGames/Services/SpaceIntersection.h"

using MoriorGames::SpaceIntersection;
using MoriorGames::Cube;
using MoriorGames::Coordinate;

namespace SpaceIntersectionTest {

TEST_CASE("SpaceIntersectionTest1", "Should be able to get the resultant Cuboid on Intersection of 2 Cuboids")
{

    auto cube1 = new Cube(new Coordinate(0, 0, 0), 1);
    auto cube2 = new Cube(new Coordinate(0, 0, 0), 1);

    auto spaceIntersection = new SpaceIntersection(cube1, cube2);

    auto volumeCalc = new CuboidVolumeCalculator(spaceIntersection->getResultantCuboid());

    printf("\n\n === SpaceIntersectionTest 1 === \n");
    cube1->print();
    cube2->print();
    printf("RESULT: %i \n", volumeCalc->getVolume());

    REQUIRE(volumeCalc->getVolume() == 1);
}

TEST_CASE("SpaceIntersectionTest2", "Should be able to get the resultant Cuboid on Intersection of 2 Cuboids")
{
    auto cube1 = new Cube(new Coordinate(0, 0, 0), 100);
    auto cube2 = new Cube(new Coordinate(0, 0, 0), 1);

    auto spaceIntersection = new SpaceIntersection(cube1, cube2);

    auto volumeCalc = new CuboidVolumeCalculator(spaceIntersection->getResultantCuboid());

    printf("\n\n === SpaceIntersectionTest 2 === \n");
    cube1->print();
    cube2->print();
    printf("RESULT: %i \n", volumeCalc->getVolume());
    REQUIRE(volumeCalc->getVolume() == 1);
}

TEST_CASE("SpaceIntersectionTest3", "Should be able to get the resultant Cuboid on Intersection of 2 Cuboids")
{
    auto cube1 = new Cube(new Coordinate(0, 0, 0), 100);
    auto cube2 = new Cube(new Coordinate(0, 0, 0), 0);

    auto spaceIntersection = new SpaceIntersection(cube1, cube2);

    auto volumeCalc = new CuboidVolumeCalculator(spaceIntersection->getResultantCuboid());

    printf("\n\n === SpaceIntersectionTest 3 === \n");
    cube1->print();
    cube2->print();
    printf("RESULT: %i \n", volumeCalc->getVolume());
    REQUIRE(volumeCalc->getVolume() == 0);
}

TEST_CASE("SpaceIntersectionTest4", "Should be able to get the resultant Cuboid on Intersection of 2 Cuboids")
{
    auto cube1 = new Cube(new Coordinate(0, 0, 0), 2);
    auto cube2 = new Cube(new Coordinate(0, 0, 0), 50);

    auto spaceIntersection = new SpaceIntersection(cube1, cube2);

    auto volumeCalc = new CuboidVolumeCalculator(spaceIntersection->getResultantCuboid());

    printf("\n\n === SpaceIntersectionTest 4 === \n");
    cube1->print();
    cube2->print();
    printf("RESULT: %i \n", volumeCalc->getVolume());
    REQUIRE(volumeCalc->getVolume() == 8);
}

TEST_CASE("SpaceIntersectionTest5", "Should be able to get the resultant Cuboid on Intersection of 2 Cuboids")
{
    auto cube1 = new Cube(new Coordinate(-5, -5, -5), 5);
    auto cube2 = new Cube(new Coordinate(0, 0, 0), 5);

    auto spaceIntersection = new SpaceIntersection(cube1, cube2);

    auto volumeCalc = new CuboidVolumeCalculator(spaceIntersection->getResultantCuboid());

    printf("\n\n === SpaceIntersectionTest 5 === \n");
    cube1->print();
    cube2->print();
    printf("RESULT: %i \n", volumeCalc->getVolume());
    REQUIRE(volumeCalc->getVolume() == 0);
}

TEST_CASE("SpaceIntersectionTest6", "Should be able to get the resultant Cuboid on Intersection of 2 Cuboids")
{
    auto cube1 = new Cube(new Coordinate(-4, -4, 0), 5);
    auto cube2 = new Cube(new Coordinate(0, 0, 0), 5);

    auto spaceIntersection = new SpaceIntersection(cube1, cube2);

    auto volumeCalc = new CuboidVolumeCalculator(spaceIntersection->getResultantCuboid());

    printf("\n\n === SpaceIntersectionTest 6 === \n");
    cube1->print();
    cube2->print();
    printf("RESULT: %i \n", volumeCalc->getVolume());
    REQUIRE(volumeCalc->getVolume() == 5);
}

TEST_CASE("SpaceIntersectionTest7", "Should be able to get the resultant Cuboid on Intersection of 2 Cuboids")
{
    auto cube1 = new Cube(new Coordinate(-3, -3, 1), 5);
    auto cube2 = new Cube(new Coordinate(1, 1, 1), 5);

    auto spaceIntersection = new SpaceIntersection(cube1, cube2);

    auto volumeCalc = new CuboidVolumeCalculator(spaceIntersection->getResultantCuboid());

    printf("\n\n === SpaceIntersectionTest 7 === \n");
    cube1->print();
    cube2->print();
    printf("RESULT: %i \n", volumeCalc->getVolume());
    REQUIRE(volumeCalc->getVolume() == 5);
}

TEST_CASE("SpaceIntersectionTest8", "Should be able to get the resultant Cuboid on Intersection of 2 Cuboids")
{
    auto cube1 = new Cube(new Coordinate(1, 1, 1), 5);
    auto cube2 = new Cube(new Coordinate(-3, -3, 1), 5);

    auto spaceIntersection = new SpaceIntersection(cube1, cube2);

    auto volumeCalc = new CuboidVolumeCalculator(spaceIntersection->getResultantCuboid());

    printf("\n\n === SpaceIntersectionTest 8 === \n");
    cube1->print();
    cube2->print();
    printf("RESULT: %i \n", volumeCalc->getVolume());
    REQUIRE(volumeCalc->getVolume() == 5);
}

}
