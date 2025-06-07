#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int find(vector<int> &arr, int target)
{
    int mini = INT_MAX;
    cout << target << "  target  \n";
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  arr [ i] \n";

        int ans = find(arr, target - arr[i]);
        // cout << ans << "  ans by fun \n";

        if (ans != INT_MAX)

            mini = min(mini, ans + 1);
        cout << mini << "  mini  \n";
    }
    return mini;

    // find(arr, target, i + 1, out);
}

int main(int argc, char const *argv[])
{
    // vector<int> arr = {1,3,5};
    // int target = 11;
    // int i = 0;
    // vector<int> out;

    // vector<int> arr = {5};
    // int target = 6;

    vector<int> arr = {3};
    int target = 0;
    int ans = find(arr, target);

    cout << ans;

    return 0;
}
