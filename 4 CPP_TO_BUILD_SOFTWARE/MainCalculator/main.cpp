#include <iostream>
#include "calculator.h"
#include "physics.h"

#include "maths.h"
using namespace std;

int main()
{
    Calculator calc;
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Add: " << calc.add(a, b) << std::endl;
    std::cout << "Subtract: " << calc.sub(a, b) << std::endl;
    std::cout << "Multiply: " << calc.mul(a, b) << std::endl;
    std::cout << "Power: " << calc.pow(a, b) << std::endl;

    try
    {
        std::cout << "Divide: " << calc.divi(a, b) << std::endl;
    }
    catch (const std::invalid_argument &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    cout << "  maths functions se  add :  " << maths::add(a, b) << "\n";

    cout << "potetiall energy" << physics::calcForce(5, 5.7);

    // (double mass, double acceleration);
    std::cout << "Press Enter to exit...   .. ";
    std::cin.ignore();
    std::cin.get();

    return 0;
}
