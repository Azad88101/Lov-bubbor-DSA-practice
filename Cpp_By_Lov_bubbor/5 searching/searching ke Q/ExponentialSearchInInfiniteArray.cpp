#include <iostream>
#include <vector>
using namespace std;
int BS(vector<int> nums, int s, int e, int t)
{
    int mid = 0;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (nums[mid] == t)
        {
            return mid;
        }
        else if (nums[mid] > t)
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

int Expofind(vector<int> num, int t)
{
    int i = 0, j = 1;
    while (num[j] < t)
    {
        if (num[j] == t)
        {
            return j;
        }
        else if (num[i] == t)
        {
            return i;
        }
        else
        {
            i = j;
            j = j * 2;
        }
    }
    return BS(num, i, j, t);
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
        654567,
        3243245,
        54678654,
        123456789};
    int target = 4;
    int ans = Expofind(arr, target);
    cout << "index is    " << ans << "   value is   " << arr[ans];

    return 0;
}
