#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ValidatingHieght(vector<long long int> arr, long long int m, long long int n, long long int mid)
{
    long long int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
        {
            ans += abs(arr[i] - mid);
        }
        // else
        // {
        //     ans += abs(arr[i] - mid);
        // }
    }
    return ans;
}

int FindMaxHeightOfSaw(vector<long long int> arr, long long int m)
{
    sort(arr.begin(), arr.end());
    long long int n = arr.size();
    long long int s = 0;
    long long int e = arr[n - 1];

    // cout << n << "\n"
    //      << e;

    long long int ans = -1;
    long long int mid = 0;
    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (ValidatingHieght(arr, m, n, mid) > m)
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

    // vector<long long int> arr{4, 42, 40, 26, 46};
    // long long int m = 20;

    // long long int ans = FindMaxHeightOfSaw(arr, m);
    // cout << ans;

    vector<long long int> arr;

    long long int m, n;

    cin >> n >> m;

    while (n--)
    {
        long long hieght;

        cin >> hieght;
        arr.push_back(hieght);
        /* code */
    }

    // long long int ans = FindMaxHeightOfSaw(arr, m);
    cout << FindMaxHeightOfSaw(arr, m);
    return 0;
}
