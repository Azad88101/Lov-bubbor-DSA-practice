#include <iostream>
#include <vector>
using namespace std;

int power(int n, int pow)
{
    if (pow == 0)
        return 1;

    if (pow == 1)
        return n;
    int ans = power(n, pow / 2);
    if (pow & 1)
        return n * ans * ans;
    else
        return ans * ans;
}
int main()
{

    cout << power(3, 8);

    return 0;
}
