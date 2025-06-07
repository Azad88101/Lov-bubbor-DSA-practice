#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool Possible(vector<int> arr, int k, int mid)
{
    int pos = arr[0];
    int count = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - pos > mid)
        {
            count++;
            pos = arr[i];
        }
        if (count == k)
        {
            return true; /* code */
        }

        /* code */
    }
    return false;
}
int findMaxDistance(vector<int> arr, int k)
{

sort(arr.begin(),arr.end());
    int s = 0;

    int e = arr[arr.size() - 1];
    cout << e;
    int mid = 0;
    int ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (Possible(arr, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
}

int main(int argc, char const *argv[])
{

    vector<int> arr{1, 2, 4, 8, 9};
    int k = 2;
    int ans = findMaxDistance(arr, k);
    cout<<"  "<<ans;
    return 0;
}
