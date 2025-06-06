#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSegment(int n, int x, int y, int z)
{
    if (n == 0)
        return 0;

    if (n < 0)
        return INT_MIN;

    int a = 0, b = 0, c = 0;
    // if (n - x >= 0)
    a = findSegment(n - x, x, y, z) + 1;
    // if (n - y >= 0)
    b = findSegment(n - y, x, y, z) + 1;
    // if (n - z >= 0)
    c = findSegment(n - z, x, y, z) + 1;
    return max(a, max(b, c));
}

int main(int argc, char const *argv[])
{

    int n = 8, x = 3, y = 3, z = 3;

    int maxi = findSegment(n, x, y, z);

    if (maxi < 0)
    {
        maxi = 0;
    }
    cout << maxi;
    return 0;
}
 