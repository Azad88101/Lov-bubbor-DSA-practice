// #include <iostream>
// #include <vector>
// using namespace std;

////////////////        pivot is sbase bada elem ok

//////sbse baadiiiii vallue find ke liye in sorted and rotated array

/////////////////

// int findPivotInRoatedAndSortedArray(vector<int> arr)
// {
//     int s = 0;
//     int e = arr.size() - 1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if  ( mid+1<=e &&  arr[mid] > arr[mid + 1])
//         {
//             return mid;
//         }
//         else if (mid-1<=s && arr[mid - 1] > arr[mid])
//         {
//             return mid - 1;
//         }
//         else if ( arr[s] > arr[mid])
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
// }
// int main(int argc, char const *argv[])
// {
//     vector<int> arr{10, 11, 12, 13, 14, 15, 16, 17, 18, 1, 2, 3, 4, 5, 6};
//     int idx = findPivotInRoatedAndSortedArray(arr);
//     cout<<"index = "<<idx<<" elem = "<<arr[idx];
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

////////////////// sbse choti value in roated array

int findPivotInRoatedAndSortedArray(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid + 1 <= e && arr[mid] > arr[mid + 1])
        {
            return mid + 1;
        }
        else if (mid - 1 >= s && arr[mid - 1] > arr[mid])
        {
            return mid;
        }
        else if (arr[s] > arr[mid])
        {

            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    vector<int> arr{20, 25, 65, 11, 13, 15, 17};
    int idx = findPivotInRoatedAndSortedArray(arr);
    cout << "index = " << idx << " elem = " << arr[idx];
    return 0;
}
