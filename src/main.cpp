#include <iostream>
#include "lib/arithmetics.hpp"

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    std::cout << "Sum: " << Arithmetic::calcSum(a, b) << std::endl;
    std::cout << "Difference: " << Arithmetic::calcDiff(a, b) << std::endl;
    std::cout << "Product: " << Arithmetic::calcProduct(a, b) << std::endl;
    std::cout << "Square of " << a << ": " << Arithmetic::calcSquare(a) << std::endl;

    return 0;
}
