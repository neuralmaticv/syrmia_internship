#include "arithmetics.hpp"
#include <cstddef>
#include <cstdint>

int Arithmetics::calcSum(int a, int b)
{
    return a + b;
}

int Arithmetics::calcDiff(int a, int b)
{
    return a - b;
}

int Arithmetics::calcProduct(int a, int b)
{
    return a * b;
}

int Arithmetics::calcSquare(int a)
{
    return a * a;
}

int Arithmetics::addBugs(void) const {
    int result;

    double a1 = 100000.0;
    int16_t a2 = a1;
 
    // result = 1 << -1;
    // result = 1 << 31;
    // result = result / 0;

    // int *p1 = new int(5);
    // delete p1;
    // *p1 = 10;
 
    // int *p2 = NULL;
    // *p2 = 5;
 
    // cppcheck-suppress uninitvar
    return result;
}