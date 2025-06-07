#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMinElements(vector<int> arr, int target, int mini)
{
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }

    int ans;
    for (auto val : arr)
    {

        ans = findMinElements(arr, target - val, mini);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 6, 4,8,10,12,13,14,15};
    int target = 11;
    int mini = INT_MAX;
    cout << findMinElements(arr, target, mini);
    return 0;
}
