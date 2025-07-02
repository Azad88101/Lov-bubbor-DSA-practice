#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int checkWithMid(vector<int> &arr, int s, int e, int mid)
{
    // int sum = 0;
    // for (int i = s; i <= e; i++)
    // {
    //     sum += arr[i];
    // }
    // // return ;
    // return max(ans1, max(ans2, sum));

    int sum = 0;
    int leftSum = INT_MIN;
    for (int i = mid; i >= s; i--)
    {
        sum += arr[i];
        leftSum = max(sum, leftSum);
    }

    sum = 0;
    int rightSum = INT_MIN;
    for (int i = mid + 1; i <= e; i++)
    {
        sum += arr[i];
        rightSum = max(sum, rightSum);
    }
    return leftSum + rightSum;
}
int findSum(vector<int> &arr, int s, int e)
{
    if (s == e)
    {
        return arr[s];
    }

    int mid = (s + e) / 2;
    int ans1 = findSum(arr, s, mid);
    int ans2 = findSum(arr, mid + 1, e);
    int ans3 = checkWithMid(arr, s, e, mid);

    cout << ans1 << " " << ans2 << " " << ans3 << " \n";
    return max(ans1, max(ans2, ans3));
}
int main(int argc, char const *argv[])

{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int s = 0;
    int e = arr.size() - 1;
    cout << findSum(arr, s, e);

    return 0;
}
