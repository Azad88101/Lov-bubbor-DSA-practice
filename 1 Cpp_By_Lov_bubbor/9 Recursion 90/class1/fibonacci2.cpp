
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 2)
        return 1;
    if (n == 1)
        return 0;

    int ans = fib(n - 1) + fib(n - 2);

    return ans;
}
int main(int argc, char const *argv[])
{

    cout << fib(5);

    return 0;
}
