#include <iostream>
using namespace std;

int findGCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a > 0 && b > 0)
    {
        if (a >= b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a == 0 ? b : a;
}

int findGCDByRecursion(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    if (a >= b)
    {
        return findGCDByRecursion(a - b, b);
    }
    else
    {

        return findGCDByRecursion(a, b - a);
    }
}

int findGCDByRecursion2(int a, int b)
{
    if (b == 0)
        return a;

    return findGCDByRecursion2(b, a % b);
}

int findLcm(int a, int b)
{
    int lcm = (a * b) / findGCDByRecursion(a, b);
    return lcm;
}
int main(int argc, char const *argv[])
{
    int a = 24;
    int b = 74;
    cout << findGCD(a, b) << endl;

    cout << findLcm(a, b) << endl;

    // cout << ans << endl;
    // cout << ans2;

    cout << findGCDByRecursion(a, b) << endl;
    cout << findGCDByRecursion2(a, b);
    return 0;
}

