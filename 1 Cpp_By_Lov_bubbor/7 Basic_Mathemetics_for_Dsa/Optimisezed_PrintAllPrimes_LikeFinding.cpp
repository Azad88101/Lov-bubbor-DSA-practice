// #include <iostream>
// #include <vector>

// using namespace std;

// vector<bool> Sieve(int n)
// {

//     vector<bool> sieve(n + 1, true);

//     sieve[0] = sieve[1] = false;
//     int i = 2;
//     while (i <= n)
//     {
//         if (sieve[i] == true)
//         {
//             int j = i * 2;
//             while (j <= n)
//             {
//                 sieve[j] = false;
//                 j += i;
//             }
//         }
//         i++;
//     }
//     return sieve;
// }
// int main(int argc, char const *argv[])

// {
//     int n = 30;
//     vector<bool> sieves = Sieve(n);
//     for (int i = 0; i < n; i++)
//     {
//         if (sieves[i] == true)
//         {
//             cout << i << "  ";
//         }
//     }

//     return 0;
// }
// //////////////////22222222222222222222222222222222222222222222222222222

/////////////// better apppproach

#include <iostream>
#include <vector>

using namespace std;

vector<bool> Sieve(int n)
{

    vector<bool> sieve(n + 1, true);

    sieve[0] = sieve[1] = false;
    int i = 2;
    int ans = 0;

    // optimization 222222   outer loop   i jayega sirf root n tak
    while (i * i <= n)
    {
        if (sieve[i] == true)
        {
            // ans+=i;

            // int j = i * 2 ;     optimization 1  innerlooop
            int j = i * i;
            /////////////////   optimization 33333333333
            if (j > n)
            {
                break;
            }

            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
        i++;
    }
    // cout<<ans;
    return sieve;
}
int main(int argc, char const *argv[])

{
    int n = 20;

    // Sieve(n);
    vector<bool> sieves = Sieve(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sieves[i] == true)
        {
            sum += i;
        }
    }
    cout << sum;

    return 0;
}
