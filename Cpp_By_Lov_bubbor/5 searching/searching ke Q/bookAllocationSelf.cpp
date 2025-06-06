#include <vector>
#include <iostream>
using namespace std;

bool possible(vector<int> arr, int m, int n, int mid)
{
    int count = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false; /* code */
        }
        if (arr[i] + pagesum > mid)
        {
            count++;
            pagesum = arr[i];
            if (count > m)
            {
                return false;
            }
        }
        else
        {
            pagesum += arr[i];
        }
    }

    return true;
}

int allocate(vector<int> arr, int m)
{

    int n = arr.size();

    if (m > n)
    {
        return -1;
    }

    int s = 0;
    int e = 0;
    for (auto var : arr)
    {
        e += var;
    }
    // cout << e;

    int ans = 0;
    int mid = 0;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (possible(arr, m, n, mid))
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
    vector<int> arr{67, 12, 34, 90};
    int m = 2;

    int ans = allocate(arr, m);
    cout << ans;
    return 0;
}
