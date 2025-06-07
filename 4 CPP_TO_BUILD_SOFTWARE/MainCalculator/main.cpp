#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Add: " << calc.add(a, b) << std::endl;
    std::cout << "Subtract: " << calc.sub(a, b) << std::endl;
    std::cout << "Multiply: " << calc.mul(a, b) << std::endl;
    std::cout << "Power: " << calc.pow(a, b) << std::endl;

    try {
        std::cout << "Divide: " << calc.divi(a, b) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "Press Enter to exit...   .. ";
    std::cin.ignore();
    std::cin.get();

    return 0;
}
