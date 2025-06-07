#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool possible(vector<int> arr, int k, int mid)
{

    int count = 1;
    int pos = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - pos >= mid)
        {
            count++;
            pos = arr[i];
        }
        if (count == k)
            return true;
    }
    return false;
}

int allocateCows(vector<int> arr, int k)
{
    sort(arr.begin(), arr.end());
    int s = 0;
    int e = arr[arr.size() - 1];

    int mid = 0;
    int ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (possible(arr, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1, 2, 4, 8, 9};
    int k = 3;

int ans = allocateCows(arr, k);
    cout << arr[arr.size() - 1] <<"\n"<<ans;

    return 0;
}
