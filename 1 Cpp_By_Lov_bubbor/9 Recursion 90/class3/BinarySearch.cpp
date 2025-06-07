#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int t, int s, int e, int mid)
{

    mid = s + (e - s) / 2;

    if (s > e)
    {
        return -1;
    }

    if (arr[mid] == t)
        return mid;
    if (arr[mid] > t)
        return binarySearch(arr, t, s, mid, mid);

    if (arr[mid] < t)
        return binarySearch(arr, t, mid, e, mid);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int t = 7;
    int s = 0;
    int e = arr.size();
    int mid = s + (e - s) / 2;
    int ans = binarySearch(arr, t, s, e, mid);
    cout << ans + 1;

    return 0;
}
