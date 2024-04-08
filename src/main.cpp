#include <iostream>
#include "lib/arithmetics.hpp"

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    std::cout << "Sum: " << Arithmetics::calcSum(a, b) << std::endl;
    std::cout << "Difference: " << Arithmetics::calcDiff(a, b) << std::endl;
    std::cout << "Product: " << Arithmetics::calcProduct(a, b) << std::endl;
    std::cout << "Square of " << a << ": " << Arithmetics::calcSquare(a) << std::endl;

    return 0;
}
