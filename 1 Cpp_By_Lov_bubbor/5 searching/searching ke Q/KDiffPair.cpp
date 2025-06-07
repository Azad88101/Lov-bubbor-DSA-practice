////leeet problem 532

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
// #include<search.h>////
using namespace std;
int findNoOfuniquePair(vector<int> arr, int k)
{
    int i = 0, j = 1;
    int diff = 0;
    int ans = 0;
    sort(arr.begin(), arr.end());
    set<pair<int, int>> ans;
    while (j <= arr.size() - 1)
    {
        diff = arr[j] - arr[i];
        if (diff == k)
        {
            ans.insert(arr[i], arr[j]);
            i++;
            j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if (i == j)
        {
            j++;
        }
    }
    // return ans;
    return ans.size()
}
int main(int argc, char const *argv[])
{
    vector<int> arr{1, 1, 1, 1, 1, 1, 1, 1};
    int k = 0;
    int ans = findNoOfuniquePair(arr, k);
    cout << "ans is " << ans;
    return 0;
}
