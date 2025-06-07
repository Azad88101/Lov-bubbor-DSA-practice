#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// bool isPrime(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }

//     int sqrtN = sqrt(n);
//     for (int i = 2; i <= sqrtN; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
int findPrimes(int n)
{

    /////////////////////seive of eratosthenes

    int ans = 0;
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            ans++;
            int j = 2 * i;
            while (j < n)

            {
                prime[j] = false;
                j += i;
            }
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{

    int no = 10;

    int ans = findPrimes(no);
    cout << ans;
    return 0;
}
