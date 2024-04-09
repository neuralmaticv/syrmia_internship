#ifndef ARITHMETICS_HPP
#define ARITHMETICS_HPP

class Arithmetics
{
public:
    int first, second;
    Arithmetics();
    Arithmetics(int first, int second);
    int calcSum(void) const;
    int calcDiff(void) const;
    int calcProduct(void) const;
    int calcSquare(void) const;
    // int addBugs(void) const;
};

#endif // ARITHMETICS_HPP
