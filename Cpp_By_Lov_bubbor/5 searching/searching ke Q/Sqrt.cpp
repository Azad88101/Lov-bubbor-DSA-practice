#include <iostream>
#include <vector>
using namespace std;
int sqrt(int n)
{
    int s = 0;
    int e = n - 1;
    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * mid == n)
        {
            return mid;
            /* code */
        }
        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n = 20;
    int ans = sqrt(n);
    double temp = 0;
    double precision = 0.1;

    for (int i = 0; i < 5; i++)
    {
        for (double j = ans; j * j < n; j = j + precision)
        {
            temp = j + precision;
        }
        precision = precision / 10;
    }

    cout << ans << endl;

    cout << "precise  " << temp << " ";
    return 0;
}
