#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int find(vector<int> arr, int target)
{
    int mini = INT_MAX;
    if (target == 0)
        return 0;
    if (target < 0)
        return INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = find(arr, target - arr[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans+1);
        }
    }
    return mini;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3,4,6};
    int target = 6;

    int ans = find(arr, target);
    cout << ans;
    return 0;
}
