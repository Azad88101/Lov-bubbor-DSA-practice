#include <iostream>
#include <vector>
using namespace std;
int unique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    //     vector<char>arr;
    //     cout<<(sizeof(arr)/sizeof(char));

    // find unique number
    // cout<<"enter the size of arr\n";
    // int n;
    // cin>>n;

    // vector<int>arr(n);
    // cout<<"enter elem\n";
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cin>>arr[i];
    // }

    // int uniqueElement=unique(arr);
    // cout<<uniqueElement;

    // vector<int> b{1, 2, 3, 4, 5};
    // vector<int> a{6, 7, 8, 9};
    // vector<int>ans;

    // union
    // for (int i = 0; i < a.size(); i++)
    // {
    //  ans.push_back(a[i]);
    // }
    //  for (int i = 0; i < b.size(); i++)
    // {
    //  ans.push_back(b[i]);
    // }
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    // Intesection
    vector<int> a{1, 2, 3,3, 4, 5};
    vector<int> b{
        3,
        3,
        4,
        5,
        6,
    };
    vector<int> ans;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                b[j]=-1;
                ans.push_back(a[i]);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] <<endl;
    }
    

    return 0;
}
