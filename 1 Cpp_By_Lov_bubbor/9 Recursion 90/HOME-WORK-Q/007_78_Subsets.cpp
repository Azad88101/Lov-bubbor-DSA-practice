#include <iostream>
#include <vector>
using namespace std;

void Solve(vector<int> &arr, vector<int> temp, vector<vector<int>> &ans, int i)
{

    if (i >= arr.size())
    {
        ans.push_back(temp);
        return;
    }

    Solve(arr, temp, ans, i + 1);
    temp.push_back(arr[i]);
    Solve(arr, temp, ans, i + 1);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3};

    // vector<vector<int>> ans;
    // Solve(arr, {}, ans, 0);
    // for (auto v : ans)
    // {
    //     cout << "{";
    //     for (auto val : v)
    //         cout << " " << val << " ";
    //     cout << "}, ";
    // }

    vector<vector<int>> ans = {{}};
    for (int num : arr)
    {
        int size = ans.size();
        for (int i = 0; i < size; i++)
        {
            vector<int> subset = ans[i];
            subset.push_back(num);
            ans.push_back(subset);
        }
    }

    for (auto v : ans)
    {
        cout << "{";
        for (auto val : v)
            cout << " " << val << " ";
        cout << "}, ";
    }
    return 0;
}
