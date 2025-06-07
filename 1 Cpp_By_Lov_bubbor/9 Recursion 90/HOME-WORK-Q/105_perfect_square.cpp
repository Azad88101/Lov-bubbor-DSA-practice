#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int findPerfectSq(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int ans = INT_MAX;
    int i = 1;

    int end = sqrt(n);
    while (i <= end)
    {
        int perfectSq = i * i;
        int squareAns = 1 + findPerfectSq(n - perfectSq);
        if (squareAns < ans)
        {
            ans = squareAns;
        }
        i++;
    }

    return ans;
}

int main()
{
    int n = 13;
    cout << findPerfectSq(n) - 1;
}