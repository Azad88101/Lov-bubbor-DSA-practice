#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int findMin(vector<int> &arr, int target)
{
    if (target == 0)
        return 0;
    if (target < 0)
        return -1; // base case, not possible

    int mini = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        int ans = findMin(arr, target - arr[i]);

        if (ans != -1)
        {
            mini = min(mini, ans + 1);
        }
    }

    return (mini == INT_MAX) ? -1 : mini;
}

int main()
{
    vector<int> arr = {2};
    int target = 3;

    cout << "Minimum coins needed: " << findMin(arr, target) << endl;
    return 0;
}
