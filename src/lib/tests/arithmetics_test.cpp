#include "../arithmetics.hpp"
#include <gtest/gtest.h>

class ArithmeticsTestFixture : public ::testing::Test {
    public:
        const Arithmetics zeros, largerFirst, smallerFirst;

        ArithmeticsTestFixture():
            zeros(Arithmetics()),
            largerFirst(Arithmetics(100, 50)),
            smallerFirst(Arithmetics(40, 100))
        {

        }

        void SetUp()
        {
            std::cout << "Test case started" << std::endl;
        }

        void TearDown()
        {
            std::cout << "Test case finished" << std::endl;
        }

        ~ArithmeticsTestFixture() 
        {

        }
};

TEST_F(ArithmeticsTestFixture, SumIntTest)
{
    EXPECT_EQ(zeros.calcSum(), 0);
    EXPECT_EQ(largerFirst.calcSum(), 150);
    EXPECT_EQ(smallerFirst.calcSum(), 140);
}


TEST_F(ArithmeticsTestFixture, DiffIntTest)
{
    EXPECT_EQ(zeros.calcDiff(), 0);
    EXPECT_EQ(largerFirst.calcDiff(), 50);
    EXPECT_EQ(smallerFirst.calcDiff(), -60);
}

TEST_F(ArithmeticsTestFixture, ProductIntTest)
{
    EXPECT_EQ(zeros.calcProduct(), 0);
    EXPECT_EQ(largerFirst.calcProduct(), 5000);
    EXPECT_EQ(smallerFirst.calcProduct(), 4000);
}

TEST_F(ArithmeticsTestFixture, SquareIntTest)
{
    EXPECT_EQ(zeros.calcProduct(), 0);
    EXPECT_EQ(largerFirst.calcSquare(), 10000);
    EXPECT_EQ(smallerFirst.calcSquare(), 1600);
    EXPECT_EQ(smallerFirst.calcSquare(), 160);
}