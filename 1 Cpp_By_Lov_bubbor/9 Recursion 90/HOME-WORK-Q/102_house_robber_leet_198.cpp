#include <iostream>
#include <vector>
using namespace std;

int odd(vector<int> &nums, int i)
{
    int ans = 0;
    for (; i < nums.size();)
    {
        ans += nums[i];
        i += 2;
    }
    return ans;
}

int even(vector<int> &nums, int i)
{
    int ans = 0;
    for (; i < nums.size();)
    {
        ans += nums[i];
        i += 2;
    }
    return ans;
}

int rob(vector<int> &nums)
{

    int ans = max(even(nums, 0), odd(nums, 1));

    // ans = max(nums[0]+nums[nums.size()-1],ans);
    return ans;
}

// odd even nhi hal rha h

// by recuirson
int robRec(vector<int> &nums, int i)
{

    if(i>=nums.size())return 0;
    int pickAns = nums[i] + robRec(nums, i + 2);
    int notPickAns = 0 + robRec(nums, i + 1);

    return max(pickAns, notPickAns);
}
int main(int argc, char const *argv[])
{
    // vector<int> nums = {1, 2, 3, 1};
    // int Output = 4;
    // int ans = 0;
    // for (int i = 0; i < nums.size();)
    // {
    //     ans += nums[i];
    //     i += 2;
    // }
    // cout << ans;

    // we can do this by using pick or not pick recuriosn

    vector<int> nums = {1, 2, 3, 1};

    cout << robRec(nums, 0);

    return 0;
}
