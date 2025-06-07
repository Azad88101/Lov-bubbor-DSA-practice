#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool possible(vector<int> arr, int k, int n, int mid)

{

    int count = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {

            return false;
        }
        if (arr[i] + sum > mid)
        {
            count++;
            sum = arr[i];
            if (count > k)
            {
                return false;
            }
        }

        else
        {
            sum += arr[i];
        }
    }
    return true;
}

int time(vector<int> arr, int k)
{

    sort(arr.begin(), arr.end());
    int s = 0;
    int e = 0;
    int ans = -1;
    int mid = 0;
    int n = arr.size();
    for (auto var : arr)
    {
        e += var;
    }

    // cout<<e;

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (possible(arr, k, n, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    vector<int> arr{5, 10, 30, 15, 20};
    int k = 2;
    int ans = time(arr, k);
    cout << ans;
    return 0;
}
