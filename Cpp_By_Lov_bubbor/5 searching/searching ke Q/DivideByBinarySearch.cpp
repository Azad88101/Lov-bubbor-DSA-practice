#include <iostream>
#include <vector>
using namespace std;
int findQ(int a, int b)
{
    int s = 0;
    int e = abs(a);
    int mid = s + (e - s) / 2;
    int store = 0;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (abs(b * mid) == abs(a))
        {
            store = mid;
            break;
        }
        else if (abs(b * mid) > abs(a))
        {

            e = mid;
        }
        else
        {
            store = mid;

            s = mid + 1;
        }
    }

    if (a > 0 && b > 0 || a < 0 && b < 0)
    {
        return store;
    }
    else

    {
        return -store;
    }
}
int main(int argc, char const *argv[])
{
    int divident = -13;
    int divisior = -3;
    float ans = findQ(divident, divisior);
    float temp = 0;
    // temp =abs(ans);
    // cout << ans;
    float steps = 0.1;
    for (int i = 0; i < 4; i++)
    {
        for (float j = ans; j * divisior < divident; j = j + steps)
        {
            ans = j;
        }
        steps = steps / 10;
    }
    cout << ans;

    return 0;
}
