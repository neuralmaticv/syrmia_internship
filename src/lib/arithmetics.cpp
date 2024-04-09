#include "arithmetics.hpp"
#include <cstddef>
#include <cstdint>

Arithmetics::Arithmetics() {
    first = 0;
    second = 0;
}

Arithmetics::Arithmetics(int first, int second) : first(first), second(second) {}

int Arithmetics::calcSum(void) const
{
    return first + second;
}

int Arithmetics::calcDiff(void) const
{
    return first - second;
}

int Arithmetics::calcProduct(void) const
{
    return first * second;
}

int Arithmetics::calcSquare(void) const
{
    return first * first;
}

// int Arithmetics::addBugs(void) const {
//     int result;

//     double a1 = 100000.0;
//     int16_t a2 = a1;
 
//     // result = 1 << -1;
//     // result = 1 << 31;
//     // result = result / 0;

//     // int *p1 = new int(5);
//     // delete p1;
//     // *p1 = 10;
 
//     // int *p2 = NULL;
//     // *p2 = 5;
 
//     // cppcheck-suppress uninitvar
//     return result;
// }