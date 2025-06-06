#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findCoins(vector<int> arr, int amount)
{

    if (amount < 1)
    {
        return 0;
    }

    vector<int> dp(amount + 1, INT_MAX);

    dp[0]=0;

    for (int i =1; i <= amount; i++)
    {
        for (auto coin : arr)
        {
            if (coin <= i && dp[i - coin] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[amount] == INT_MAX ? -1 : dp[amount];
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {5,6};
    int amount = 4;
    cout<<'\n'<<findCoins(arr,amount);

    return 0;
}

// Example 1:

// Input : coins = [ 1, 2, 5 ], amount = 11 Output : 3 Explanation : 11 = 5 + 5 + 1 Example 2 :

//     Input : coins = [2],
//         amount = 3 Output : -1 Example 3 :

//     Input : coins = [1],
//         amount = 0 Output : 0