

// a=b*q=r
// find  quentit=q

#include <iostream>
#include <vector>
using namespace std;
int quentient(int a, int b)
{
    int s = 0;
    int e = abs(a);
    // int c=abs(a);

    int ans;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        mid = s + (e - s) / 2;
        if (abs(b * mid) == abs(a))
        {
            ans = mid;
            break;
        }
        else if (abs(b * mid) > abs(a))
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    if (a > 0 && b > 0 || a < 0 && b < 0)
    {
        return ans;
    }
    else
    {

        return -ans;
    }
}
int main(int argc, char const *argv[])
{
    int a = 55;
    int b = 6;
    double ans = quentient(a, b);
    double steps = 0.1;

    // Set precision to 10 decimal places
    // cout.precision(12);  // Use 12 to show all 10 decimal places clearly
    // cout << fixed;      // Use fixed point notation

    // Increase iterations to 10 for more precision
    for (int i = 0; i < 5; i++) // Changed from 5 to 10
    {
        for (double j = ans; j * b <= a; j = j + steps)
        {
            ans = j;
        }
        steps = steps / 10; // Each iteration makes step 10 times smaller
    }

    cout << ans;
    return 0;
}
