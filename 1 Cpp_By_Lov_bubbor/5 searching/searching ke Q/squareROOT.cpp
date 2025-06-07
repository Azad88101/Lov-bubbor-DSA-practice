#include <iostream>
#include <vector>
using namespace std;

// approach 1
// int sprt(vector<int> arr, int n)
// {
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s) / 2;
//     int almost = 0;
//     while (s <= e)
//     {
//         if ((arr[mid] * arr[mid]) == n)
//         {
//             return arr[mid];
//         }
//         else if ((arr[mid] * arr[mid]) < n)
//         {
//             almost = arr[mid];
//             s= mid+1;
//         }
//         else{
//             e= mid-1;
//         }
//         mid= s+(e-s)/2;
//     }
//     return almost;
// }

// approach 2
int sqrt(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int store = 0;
    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid < target)
        {
            store = mid;

            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return store;
}

int main(int argc, char const *argv[])
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n;
    cout << "enter your no\n";
    cin >> n;
    //   int almostno=  sprt(arr, n);
    int ans = sqrt(n);

    cout << "your almost  value is " << ans;

    return 0;
}
