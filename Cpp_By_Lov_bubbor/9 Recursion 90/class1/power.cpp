#include <iostream>
using namespace std;

int power(int n, int pow)
{
    if (pow == 1)
    {
        return n;
    }
    int ans = n * power(n, pow - 1);

    return ans;
}

int main(int argc, char const *argv[])
{
    int n = 2;
    int pow = 6;
    cout << power(n, pow);
    return 0;
}
