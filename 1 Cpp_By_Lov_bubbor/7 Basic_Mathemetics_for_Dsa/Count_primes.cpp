#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 17;
    vector<bool> prime(n, true);
    int ans = 0;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cout << i << " is prime.\n";
            ans++;
            int j = i * 2;
            while (j <=n)
            {
                cout << "Marking " << j << " as not prime.\n";
                prime[j] = false;
                j += i;
            }
        }
    }

    cout << ans;

    return 0;
}
