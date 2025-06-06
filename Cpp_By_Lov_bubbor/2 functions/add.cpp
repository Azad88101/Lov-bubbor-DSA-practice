#include <iostream>
using namespace std;// namespace std

int add(int a, int b);
int main(int argc, char const *argv[])
{
    int addd = add(3, 5);
    cout << addd;
    return 0;
}

int add(int a, int b)
{
    return a + b;
}