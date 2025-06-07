#include <iostream>
#include <vector>
using namespace std;

int findIdx(vector<int> arr, int s, int e, int t)
{
    int mid = 0;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == t)
        {
            return mid;
            /* code */
        }
        else if (arr[mid] > t)
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

int expoSearch(vector<int> arr, int t)
{

    if (arr[0] == t)
    {
        return 0;
    }
    int i = 1;
    int n = arr.size();
    while (arr[i] <= t && i < n)
    {
        i = i * 2;
    }
    return findIdx(arr, i / 2, min(n - 1, i), t);
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 23, 25, 32, 43, 56, 65, 74, 75, 90, 232, 435, 567, 6546, 65765, 74567, 756, 7546, 3223124, 35677, 45674567, 5474674};
    
    int x = 74;

    int idx = expoSearch(arr, x);
    cout << "index is := " << idx << "  value is :==   " << arr[idx];

    return 0;
}
