#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 20;
    // cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        // int bit = n % 10;
        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }
    cout << ans << "\n";

    n = 1010;
    // cin >> n;

    ans = 0;
    i = 0;
    while (n != 0)
    {
        // int bit = n & 1;
        int digit = n % 10;
        // int bit = n % 10;
        if (digit == 1)
        {
            ans = pow(2, i) + ans;
        }

        n = n / 10;
        i++;
    }
    cout << ans << "\n";

    return 0;
}
