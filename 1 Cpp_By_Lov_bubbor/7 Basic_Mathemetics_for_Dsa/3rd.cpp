#include <iostream>
using namespace std;

int FastSquare(long long int n,long long int pow)
{

    long long int ans = 1;
    while (pow > 0)
    {
        if (pow % 2 != 0)
        {
            ans *= n;
        }
        n *= n;
        pow /= 2;
    }
    return ans;
}

int main(int argc, const char **argv)
{

    long long int n = 282538755;
    long long int pow = 244836246;
    long long int ans = FastSquare(n, pow);

    cout << ans;
    // int ans2 = 100000000 * 100;
    // cout << ans2;
    return 0;
}

// // #include <iostream>
// // using namespace std;
// // int FastSquare(int n, int pow)
// // {

// //     int ans = 1;
// //     while (pow > 0)
// //     {
// //         if (pow % 2 != 0)
// //         {
// //             ans = ans * n;
// //         }
// //         n = n * n;

// //         pow /= 2;
// //     }
// //     return ans;
// // }

// // int main(int argc, char const *argv[])
// // {
// //     int n = 5;
// //     int pow =0;
// //     int ans = FastSquare(n, pow);
// //     cout << ans;
// //     return 0;
// // }
