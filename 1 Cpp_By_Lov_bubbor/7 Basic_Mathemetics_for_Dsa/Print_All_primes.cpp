#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main(int argc, char const *argv[])
{

    int n = 10000;
    int c = 0;
    // for (int i = 2; i <= n; i++)
    // {
    //     if (isPrime(i))
    //     {
    //         c++;
    //         cout << i << " ";
    //     }
    // }

    vector<bool> arr(n + 1, true);
    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i])
        {
            c++;
            cout << i << " ";

            int j = i * 2;
            while (j <= n)
            {

                arr[j] = false;
                j += i;
            }
        }
    }

    cout << "\ncount " << c;

    return 0;
}
