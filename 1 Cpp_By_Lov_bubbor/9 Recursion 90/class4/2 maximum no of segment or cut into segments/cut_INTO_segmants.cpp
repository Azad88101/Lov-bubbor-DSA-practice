#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int segments(int n, int x, int y, int z)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }

    int ans1 = segments(n - x, x, y, z) + 1;
    int ans2 = segments(n - y, x, y, z) + 1;
    int ans3 = segments(n - z, x, y, z) + 1;

    int ans = max(ans1, max(ans2, ans3));

    return ans;
}

int main(int argc, char const *argv[])
{
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    int ans = segments(n, x, y, z);

    if (ans<0)
    {
        ans=0;
    }
    

    cout << ans;

    return 0;
}
