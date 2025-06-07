#include <iostream>
#include <vector>
using namespace std;
int findPrimes(int n)
{
    if (n == 0)
    {
        return 0;
    }
    vector<bool> prime(n, true);

    int ans = 0;
    int i = 2;
    prime[0]=prime[1]=false;
    while (i < n)
    {
        if (prime[i])
        {
            ans++;
            int j = i * 2;
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
        i++;

       
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n = 22;
    int ans = findPrimes(n);
    std::cout << ans << std::endl;
    return 0;
}
