#include <iostream>
#include <vector>
using namespace std;

// int getSum(vector<int> arr, int i)
// {
//     if (i == arr.size())
//     {
//         return 0;
//     }
//     return arr[i] + getSum(arr, i + 1);
// }

int bs(vector<int> arr, int k, int s, int e)
{
    if (s > e)
        return -1;

    int mid = (s + e) / 2;
    if (arr[mid] == k)
        return mid;
    if (arr[mid] < k)
        return bs(arr, k, mid + 1, e);
    else
        return bs(arr, k, s, mid - 1);
}
int main()
{
    vector<int> arr = {1, 2, 2, 5, 9};

    cout << bs(arr, 9, 0, arr.size());

    return 0;
}
