// #include<iostream>
// #include<vector>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     vector<int>arr{1,2,3,4,5,6,7};
//     vector<int>brr{5,6,7,8,9,};
//     vector<int>ans;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < brr.size(); j++)
//         {
//             if (arr[i]==brr[j])
//             {
//                 brr[j]=0;

//             }

//         }

//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         ans.push_back(arr[i]);

//     }
//       for (int j = 0; j < brr.size(); j++)
//     {
//         ans.push_back(brr[j]);

//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> a{1, 2, 3, 4, 5};
    vector<int> b{4, 5, 6, 7, 8, 9};
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                b[j] = INT8_MIN;
            }
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        ans.push_back(b[i]);
    }
    // for (auto value)
    // {
    //     /* code */
    // }
    for (int i = 0; i < ans.size(); i++)
    {
        // ans.push_back(b[i]);
        cout<<ans[i];
    }

    return 0;
}
