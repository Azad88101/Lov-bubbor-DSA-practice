// #include <iostream>
// #include <vector>
// using namespace std;
// int findMin(vector<int> &arr)
// {
//     int s = 0;
//     int e = arr.size() - 1;

//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (mid + 1 <= e && arr[mid] > arr[mid + 1])
//         {
//             return arr[mid + 1];
//         }
//         if (mid - 1 >= s && arr[mid - 1] > arr[mid])
//         {
//             return arr[mid];
//         }

//         if (arr[s] == arr[mid] && arr[mid] == arr[e])
//         {
//             s++;
//             e--;
//         }

//         else if (arr[s] <= arr[mid])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     return arr[s];
// }

// int main(int argc, char const *argv[])
// {
//     vector<int> arr{10, 1, 10, 10, 10};

//     int ans = findMin(arr);
//     cout << ans;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;
        cout << "s: " << s << ", e: " << e << ", mid: " << mid << endl;

        // If mid > mid+1, then mid+1 is the smallest element
        if (mid + 1 <= e && arr[mid] > arr[mid + 1])
        {
            return arr[mid + 1];
        }
        // If mid-1 > mid, then mid is the smallest element
        if (mid - 1 >= s && arr[mid - 1] > arr[mid])
        {
            return arr[mid];
        }

        // Handle duplicates at edges
        if (arr[s] == arr[mid] && arr[mid] == arr[e])
        {
            s++;
            e--;
        }
        else if (arr[s] <= arr[mid]) // Left half is sorted
        {
            e = mid - 1;
        }
        else // Right half is unsorted
        {
            s = mid + 1;
        }
    }
    return arr[s];
}

int main()
{
    vector<int> arr{2, 2, 2, 0, 1};
    int ans = findMin(arr);
    cout << "Minimum element: " << ans << endl;

    return 0;
}
