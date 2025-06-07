#include <iostream>
#include <vector>
using namespace std;

bool possible(vector<int> arr, int k, int mid)
{
    int count = 1;
    int pages = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] + pages > mid)
        {
            count++;
            pages = arr[i];
            if (count > k)
            {
                return false;
            }
        }
        else
        {
            pages += arr[i];
        }
    }
    return true;
}
int bookAllocate(vector<int> arr, int k)
{

    if (arr.size() < k)
    {
        return -1;
    }

    int s = 0;
    int e = 0;
    for (auto var : arr)
    {
        e += var;
    }
    if (k == 1)
    {
        return e;
    }

    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
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
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    cout << bookAllocate(arr, k);

    return 0;
}
