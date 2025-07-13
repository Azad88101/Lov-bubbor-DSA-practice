#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int t)
{
    int s = 0;
    int e = arr.size() - 1;
    int n = e;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == t)
            return mid;
        if (mid - 1 >= 0 && arr[mid - 1] == t)
            return mid - 1;
        if (mid + 1 <= n && arr[mid + 1] == t)
            return mid + 1;

        if (arr[mid] > t)
            e = mid - 2;

        else
            s = mid + 2;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    vector<vector<int>> testArrays = {
        {-18, -28, -16, -10, -1, 9, 7, 29, 24, 30},
        {10, 3, 40, 20, 50, 80, 70},
        {10, 3, 40, 20, 50, 80, 70},
        {10, 3, 40, 20, 50, 80, 70},
        {10, 3, 40, 20, 50, 80, 70},
        {10, 3, 40, 20, 50, 80, 70},
        {5},
        {},
    };

    vector<int> targets = {9, 40, 20, 3, 50, 100, 5, 5};
    vector<int> expected = {5, 2, 3, 1, 4, -1, 0, -1};

    for (int i = 0; i < testArrays.size(); i++)
    {
        int result = binarySearch(testArrays[i], targets[i]);
        cout << "Test Case " << i + 1 << ": ";
        if (result == expected[i])
            cout << "Passed ✅\n";
        else
            cout << "Failed ❌ | Expected: " << expected[i] << " Got: " << result << endl;
    }

    return 0;
}
