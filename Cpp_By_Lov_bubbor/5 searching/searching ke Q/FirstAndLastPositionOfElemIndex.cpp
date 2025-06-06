// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> findPosition(vector<int> arr, int target)
// {

///////////////////////////////here is some edge cases thats why it s wrong but logic was coorect
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s) / 2;
//     vector<int> num{};
//     while (s < e)
//     {
//         mid = s + (e - s) / 2;

//         if (arr[mid - 1] == target && arr[mid] == target)
//         {
//             // num.push_back(mid - 1);
//             // num.push_back(mid);
//             num = {mid - 1, mid};
//             return num;
//         }
//         else if (arr[mid + 1] == target && arr[mid] == target)
//         {
//             // num.push_back(mid);
//             // num.push_back(mid + 1);
//             num = {mid, mid + 1};

//             return num;
//         }
//         else if (arr[mid] < target)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     // num.push_back(-1);
//     // num.push_back(-1);
//     num = {-1, -1};
//     return num;
// }

// int main(int argc, char const *argv[])
// {
//     vector<int> arr{5, 7, 7, 8, 8, 10, 10,22, 22,34};
//     int target = 22;
//     vector<int> nums = findPosition(arr, target);
//     for (auto i : nums)
//     {
//         cout << i << "\n";
//     }
//     return 0;
// }

// // leet code https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/?envType=problem-list-v2&envId=binary-search

/////////////////////////////////////  solution 2 suing first occurence and last occurence////////////////////////////

#include <iostream>
#include <vector>
using namespace std;
vector<int> findPosition(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    vector<int> num{-1,-1};
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            num[0] = mid;
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    s = 0;
    e = arr.size() - 1;
    mid = s + (e - s) / 2;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            num[1] = mid;
            s = mid + 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return num;
}
int main(int argc, char const *argv[])
{
    vector<int> arr{5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> num = findPosition(arr, target);
    for (auto i : num)

    {
        cout << i << "\t";
    }
    return 0;
}
