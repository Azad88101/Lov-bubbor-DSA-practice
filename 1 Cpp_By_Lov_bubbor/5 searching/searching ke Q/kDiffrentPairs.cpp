#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int kdiff(vector<int> arr, int k)
{
    int i = 0;
    int j = 1;
    // int ans = 0;
    set<pair<int, int>> ans;
    

    sort(arr.begin(), arr.end());
    while (j <= arr.size() - 1)
    {
        int diff = arr[j] - arr[i];

        if (diff == k)
        {
            // std::cout << arr[i] << arr[j] << std::endl;
            // ans++;
            ans.insert({arr[i], arr[j]});
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
    return ans.size();
}
int main(int argc, char const *argv[])
{
    vector<int> arr{1,1,1,1,1,1,1,1};
    int k = 0;
    int ans = kdiff(arr, k);
    cout << ans ;
    return 0;
}
