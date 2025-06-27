#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> findPermutation(vector<int> arr, int i, vector<vector<int>> ans)
{
    if (i >= arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for (int j = i; j < arr.size(); j++)
    {
        swap(arr[i], arr[j]);
        findPermutation(arr, i + 1, ans);
        swap(arr[i], arr[j]);
    }
}

int main(int argc, char const *argv[])
{

    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    int i = 0;
    findPermutation(arr, i, ans);

    return 0;
}
