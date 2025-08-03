#include <iostream>
#include <vector>
using namespace std;

bool isPosible(vector<int> &arr, int &m, int mid)
{
    int ans = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] >= mid)
    //     {
    //         ans = abs(arr[i] - mid) + ans;
    //     }
    //     else if (abs(arr[i] - mid) > m)
    //     {
    //         return false;
    //     }
    // }
    //   if (ans >= m)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    long long ans = 0;
    for (int height : arr)
    {
        if (height > mid)
        {
            ans += (height - mid);
        }
    }
    return ans >= m;
}

int Eko_spoj(vector<int> &arr, int &m)
{
    int s = 0;
    int e = *max_element(arr.begin(), arr.end());
    for (auto v : arr)
    {
        e += v;
    }
    int ans = 0;

    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (isPosible(arr, m, mid))
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
    vector<int> arr = {20, 15, 10, 17};
    int m = 7;

    cout << Eko_spoj(arr, m);
    return 0;
}
