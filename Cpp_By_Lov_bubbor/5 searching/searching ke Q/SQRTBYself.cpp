#include <iostream>
#include <vector>
using namespace std;
int sqrt(int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int store = -1;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            store = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return store;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    // cout << sqrt(n);
   
    double ans = sqrt(n);
     double steps = 0.1;
    for (int i = 0; i < 10; i++)
    {
        for (double j = ans; j * j <= n; j = j + steps)
        {
            ans = j;
        }
        steps = steps / 10;
    }

    cout<<ans;

    return 0;
}
