#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
// vector<int> sorting(vector<int> arr)
// {
//     sort(arr.begin(), arr.end());
//     return arr;
// }





// leet  75  sor colors 0,1,2;





// vector<int> sorting(vector<int> arr)
// {
//     ////by using cont method
//     // sort(arr.begin(), arr.end());
//     // return arr;
//     int zeros, one, two;
//     zeros=one=two = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == 0)
//         {
//             zeros++;
//         }
//         if (arr[i] == 1)
//         {
//             one++;
//         }
//         else
//         {
//             two++;
//         }
//     }
//     int i = 0;
//     while (zeros--)
//     {
//         arr[i] = 0;
//         i++;
//     }
//     while (one--)
//     {
//         arr[i] = 1;
//         i++;
//     }
//     while (two--)
//     {
//         arr[i] = 2;
//         i++;
//     }
//     return arr;
// }

vector<int> sorting(vector<int> arr)
{
    int l = 0;
    int m = 0;
    int h = arr.size() - 1;
    while (m <= h)
    {

        if (arr[m] == 0)
        {
            swap(arr[m], arr[l]);
            l++;
            m++;
        }
        else if (arr[m] == 1)
        {
            // swap(arr[m], arr[l]);
            // l++;
            m++;
        }
        else
        {
            swap(arr[m], arr[h]);
            // l++;
            // m++;

            h--;
        }
    }
    return arr;
}
int main(int argc, char const *argv[])
{
    vector<int> arr{
        0,
        1,
        1,
        0,
        1,
        0,
        2,
        0,
        2,
        2,
    };
    // vector<int> num =
    vector<int> ans = sorting(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
