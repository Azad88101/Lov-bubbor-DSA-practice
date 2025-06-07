#include <iostream>
#include <vector>
using namespace std;

// move left all negative;
// int main(int argc, char const *argv[])
// {
//     vector<int> arr{-1, 2, -3, 4, -5,-9,-4, 6};
//     int start = 0;
//     int end = arr.size() - 1;
//     int mid = 0;
//     while (mid <= end)
//     {
//         if (arr[mid] < 0)
//         {
//             swap(arr[mid], arr[start]);
//             start++;
//             mid++;
//         }
//         else
//         {
//             swap(arr[mid], arr[end]);
//             end--;
//         }
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// //ye khud se kra h;

int main(int argc, char const *argv[])
{
    vector<int> arr{1 ,-1 ,3, 2, -7 ,-5 ,11,6};
    int s = 0;
    int e = arr.size() - 1;
    int mid = 0;
    while (mid <= e)
    {
        if (arr[mid] > 0)
        {
            swap(arr[mid], arr[s]);
            s++;
            mid++;
        }
        else
        {
            swap(arr[mid], arr[e]);
            e--;
        }
    }


    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
