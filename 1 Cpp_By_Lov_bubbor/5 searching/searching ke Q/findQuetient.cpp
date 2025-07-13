#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int divident = 10;
    int divisor = 4;
    int s = 0;
    int e = divident;
    int q = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid * divisor <= divident)
        {
            q = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    double ans = q;
    int pre = 7;
    double count = 0.1;
    if (q * divisor < divident)
    {

        for (int i = 0; i < pre; i++)
        {
            while (((ans + count) * divisor) <= divident)
            {
                ans += count;
            }

            count /= 10;
        }
    }
    cout << ans << endl;

    return 0;
}
