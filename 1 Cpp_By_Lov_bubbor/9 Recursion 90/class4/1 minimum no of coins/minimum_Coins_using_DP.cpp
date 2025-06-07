#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMIN(vector<int> &coins, int target)
{

    if (target < 1)
        return 0;
    vector<int> DP(target + 1, INT_MAX);
    DP[0] = 0;

    for (int i = 1; i <= target; i++)
    {

        for (auto coin : coins)
        {
            if (coin <= i && DP[i - coin] != INT_MAX)
            {
                DP[i] = min(DP[i], DP[i - coin] + 1);
            }
        }
    }
    return DP[target] == INT_MAX ? -1 : DP[target];
}

int main(int argc, char const *argv[])
{

    vector<int> coins = {1, 2, 5};
    int target = 11;
    cout << findMIN(coins, target);

    return 0;
}
