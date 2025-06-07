#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// int segments(vector<int> arr, int n)
int segments(int n, int x, int y, int z)
{
    if (n == 0)
        return 0;

    if (n < 0)
    {
        return INT_MIN;
    }

    // int maxi = INT_MIN;

    int ans1 = segments(n - x, x, y, z) + 1;
    int ans2 = segments(n - y, x, y, z) + 1;
    int ans3 = segments(n - z, x, y, z) + 1;

    int maxi = max(ans1, max(ans2, ans3));
    return maxi;

    // return maxi < 0 ? 0 : maxi;
}

int main(int argc, char const *argv[])
{

    int n = 7;
    int x = 5, y = 2, z = 2;
    int ans = segments(n, x, y, z);
    if (ans < 0)
    {
        ans = 0;
    }
    cout << ans;

    return 0;
}
