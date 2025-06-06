
#include <iostream>
#include <vector>
using namespace std;
vector<bool> Sieve(int n)
{
    vector<bool> sieve(n + 1, true);

    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i < n; i++)
    {
        if (sieve[i] == true)
        {
            int j = i * i;
            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }

    return sieve;
}

int main()
{

    int n = 25;

    vector<bool> ans = Sieve(n);

    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == true)
        {
            cout << i << " ";
        }
    }

    /* code */

    return 0;
}
