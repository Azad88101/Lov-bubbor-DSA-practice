#include <iostream>
using namespace std;

int findLcm(int gcd , int a, int b){
    int lcm = (a*b)/gcd;
    return lcm;
}
int findGCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a > 0 && b > 0)
    {
        if (a >= b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a == 0 ? b : a;







}
int main(int argc, char const *argv[])
{
    int a = 24;
    int b = 74;
    int ans = findGCD(a, b);

    int ans2 = findLcm(ans ,a,b);

    cout << ans<<endl;
    cout << ans2;
    return 0;

}
