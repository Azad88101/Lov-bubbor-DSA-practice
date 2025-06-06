#include <iostream>
#include <vector>

#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> arr = {1, 2, 3};
    int target = 6;


    vector<int> dp(target + 1, INT_MAX);

    dp[0]=0;
    for (int i = 0; i <= target; i++)

    {

        for (auto coin : arr)
        {
            if (coin <= i && dp[i - coin] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    cout << dp[target];

    return 0;
}