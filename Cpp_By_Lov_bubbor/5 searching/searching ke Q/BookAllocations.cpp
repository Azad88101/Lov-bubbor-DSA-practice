#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool valid(vector<int> arr, int m, int n, int mid)
{

    int studentCount = 1;
    int bookSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {

            return false;
        }

        if (bookSum + arr[i] > mid)
        {
            studentCount++;

            // bookSum = 0;
            bookSum = arr[i];
            if (studentCount > m)
            {
                return false;
            }
        }
        else
        {
            bookSum += arr[i];
        }
    }

return true;
}

int findminPage(vector<int> arr, int m)
{

    int n = arr.size();

    if (m > n)
    {
        return -1;
    }

    int s = 0;
    int e = 0;
    for (auto i : arr)
    {
        e += i;
    }
    int ans = 0;
    int mid = 0;
    while (s < e)
    {
        mid = s + (e - s) / 2;

        if (valid(arr, m, n, mid))
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

    vector<int> arr{12, 34, 67, 90};
    int m = 2;


    int ans = findminPage(arr,m);
    cout<<ans;

    return 0;
}
