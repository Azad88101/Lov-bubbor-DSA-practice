#include <iostream>
#include <iostream>
using namespace std;

int rollADice(int n, int k, int t)
{
    if (t < 0)
        return 0;
    if (n != 0 && t == 0)
        return 0;
    if (n == 0 && t != 0)
    {
        return 0;
    }
    if (n == 0 && t == 0)
    {
        return 1;
    }
    int ans = 0;

    for (int i = 1; i <= k; i++)
    {
        ans = ans + rollADice(n - 1, k, t - i);
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    int n = 3, k = 3, t = 6;
    cout << rollADice(n, k, t);
    return 0;
}
