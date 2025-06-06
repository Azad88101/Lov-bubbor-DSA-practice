#include <iostream>
#include <vector>
using namespace std;
bool SearchInMatrix(vector<vector<int>> arr, int target)
{
    int s = 0;
    int n = arr.size();
    int m = arr[0].size();
    int e = n * m - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid / m][mid % m] == target)
        {
            return true;
        }
        else if (arr[mid / m][mid % m] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
    vector<vector<int>> arr{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    // cout<<arr.size();
    // cout<<arr[0].size();
    int target = 9;
  bool ans =   SearchInMatrix(arr, target);
  cout<<ans;

    return 0;
}
