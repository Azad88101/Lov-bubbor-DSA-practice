#include <iostream>
#include <vector>
using namespace std;

bool possibleSol(vector<int> arr, int m, int n, int mid)
{

    int count = 1; // no of student ka count
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > mid)
        {
            return false;
        }

        if (arr[i] + pageSum > mid)
        {
            count++;
            pageSum = arr[i];
            if (count > m)
            {
                return false;
            }
        }

        else
        {
            pageSum += arr[i];
        }
    }

    return true;
}

int findPages(vector<int> arr, int m)
{
int n = arr.size();
// cout<<n;
    if (m > n)
    {
        return -1;
    }

    int s = 0;
    int e = 0;
    int ans = 0;
    for (auto var : arr)
    {
        e = e + var;
    }
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (possibleSol(arr, m, n, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{12, 34, 67, 90};
    int m = 2; // no of student
    int n = 4; // no of books
    int ans = findPages(arr, m);
    cout << ans;

    return 0;
}




//////////////////////////////////////////////////////// GFG   

// bool possibleSol(vector<int> arr, int m, int n, int mid)
// {

//     int count = 1; // no of student ka count
//     int pageSum = 0;
//     for (int i = 0; i < n; i++)
//     {

//         if (arr[i] > mid)
//         {
//             return false;
//         }

//         if (arr[i] + pageSum > mid)
//         {
//             count++;
//             pageSum = arr[i];
//             if (count > m)
//             {
//                 return false;
//             }
//         }

//         else
//         {
//             pageSum += arr[i];
//         }
//     }

//     return true;
// }

// int findPages(vector<int> arr, int m)
// {
// int n = arr.size();
// // cout<<n;
//     if (m > n)
//     {
//         return -1;
//     }

//     int s = 0;
//     int e = 0;
//     int ans = 0;
//     for (auto var : arr)
//     {
//         e = e + var;
//     }
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (possibleSol(arr, m, n, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }