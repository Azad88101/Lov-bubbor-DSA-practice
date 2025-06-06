#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int findingPairs(vector<int> arr, int k)
{
    int i = 0;
    int j = 1;

    set<pair<int, int>> ans;
    sort(arr.begin(), arr.end());

cout<<"printing pairs\n \n";
    while (j < arr.size())
    {
        int diff = abs(arr[i] - arr[j]);

        if (diff == k)
        {
            ans.insert({arr[i], arr[j]});

            cout<<arr[i]<<" "<<arr[j]<<endl;

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

    vector<int> arr{1, 3, 1, 4, 5};
    int k = 2;
    

    int ans = findingPairs(arr, k);
    cout << ans<<endl;

    vector<int> num{1, 1, 1, 1, 1};
    k = 0;
    ans = findingPairs(num, k);
    cout << ans;
    return 0;
}
