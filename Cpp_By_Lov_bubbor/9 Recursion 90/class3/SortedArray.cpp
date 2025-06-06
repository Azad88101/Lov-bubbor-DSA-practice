#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int> arr, int i, int n)
{
    bool ans = true;
    if (i == n-1)
    {
        return true;
    }

    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    return isSorted(arr, i + 1, n);
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 9};
    int i = 0;
    int n = arr.size();
    bool ans = isSorted(arr, i, n);
    cout << ans;
    return 0;
}
