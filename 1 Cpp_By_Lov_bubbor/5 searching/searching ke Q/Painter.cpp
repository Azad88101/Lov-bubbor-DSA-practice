#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int k, int mid)
{
    int c = 1;

    int timesum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (arr[i] + timesum > mid)
        {
            c++;
            timesum = arr[i];
            if (c > k)
                return false;
        }

        else
        {
            timesum += arr[i];
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 20, 30, 40};
    int k = 2;

    int s = 0;
    int e = 0;
    for (auto v : arr)
    {
        e += v;
    }

    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    cout << ans;

    return 0;
}
