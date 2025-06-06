#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// int findMin(vector<int> arr, int target)
// {
//     if (target == 0)
//     {
//         return 0;
//     }
//     if (target < 0)
//     {
//         return INT_MAX;
//     }
//     int mini = INT_MAX;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int ans = findMin(arr, target - arr[i]);

//         if (ans != INT_MAX)
//             mini = min(mini, ans + 1);
//     }
//     return mini;
// }

int findMin(vector<int> arr, int target)
{
    vector<int> dp(target + 1, INT_MAX);

    dp[0] = 0;
    for (int i = 1; i <= target; i++)
    {
        for (auto coin : arr)
        {
            if (coin <= i && dp[i - coin] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[target] == INT_MAX ? -1 : dp[target];
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {4, 5, 6};
    int target = 7;
    cout << findMin(arr, target);

    return 0;
}
