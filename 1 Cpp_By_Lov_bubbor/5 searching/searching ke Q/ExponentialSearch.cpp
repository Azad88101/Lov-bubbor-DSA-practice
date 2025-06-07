#include <iostream>
#include <vector>
using namespace std;

int FindingTarget(vector<int> arr, int s, int e, int target)
{
    int mid = 0;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return mid;
}

int expoSearch(vector<int> arr, int target)
{
    int n = arr.size();
    if (arr[0] == target)
    {
        return 0;
    }
    int i = 1;
    while (i < n && arr[i] <= target)
    {
        i = i * 2;
    }
    return FindingTarget(arr, i / 2, min(i, n - 1), target);
}
int main(int argc, char const *argv[])
{
    vector<int> arr{
        1,
        2,
        3,
        3,
        4,
        4,
        5,
        5,
        6,
        6,
        7,
        7,
        8,
        9,
        10,
        10,
        11,
        12,
        13,
        13,
        14,
        14,
        14,
        15,
        17,
        21,
        23,
        25,
        27,
        35,
        356,
        3667,
        23456,
        123456,
    };
    int target = 123456;
    int idx = expoSearch(arr, target);
    cout << "index is " << idx << "  value is  " << arr[idx];
    return 0;
}
