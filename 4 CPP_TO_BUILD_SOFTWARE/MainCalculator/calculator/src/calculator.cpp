#include <iostream>
#include <calculator.h>
#include <stdexcept>

using namespace std;

int Calculator::add(int a, int b)
{
    return a + b;
}
int Calculator::sub(int a, int b)
{
    return a - b;
}
int Calculator::divi(int a, int b)
{

    if (b == 0)
    {
        throw std::invalid_argument(" disivle by zero ");
    }
    return a / b;
}
int Calculator::mul(int a, int b)
{
    return a * b;
}
int Calculator::pow(int a, int b)
{

    int res = 1;
    for (int i = 0; i < b; i++)
    {
        res *= a;
    }
    return res;
}

