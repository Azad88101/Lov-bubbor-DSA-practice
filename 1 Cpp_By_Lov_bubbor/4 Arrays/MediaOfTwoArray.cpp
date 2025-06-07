#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr1{1, 2};
    vector<int> arr2{3};

    // cout<<arr1.size()-1;

    vector<int> temp;
    for (int i = 0; i <= arr1.size() - 1; i++)
    {
        temp.push_back(arr1[i]);
    }
    for (int i = 0; i <= arr2.size() - 1; i++)
    {
        temp.push_back(arr2[i]);
    }
    // cout<<temp.size();
    sort(temp.begin(), temp.end());
    // for(auto i : temp)
    // {

    //     cout<<temp[i];
    // }

    // for (int i = 0; i < temp.size(); i++)
    // {
    //     cout<<temp[i];
    // }
    if (temp.size() % 2 != 0)
    {
        int s = 0;
        int e = temp.size() - 1;
        int mid = s + (e - s) / 2;
        // return temp[mid];
        /* code */
        double ans = (double) temp[mid] * 1.0;
        cout << ans;
    }
    else
    {
        int s = 0;
        int e = temp.size() - 1;
        int mid = s + (e - s) / 2;
        cout << temp[mid] + temp[mid + 1] << "\n";

        double ans = (double) (temp[mid] + temp[mid + 1]) / 2.0;
        // return ans;
        cout << ans;
    }

    return 0;
}






