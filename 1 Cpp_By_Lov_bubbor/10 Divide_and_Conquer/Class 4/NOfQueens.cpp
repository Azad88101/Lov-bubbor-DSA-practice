#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row, int col, const vector<string> &arr)
{
    int i = row, j = col;

    // Check row (left side)
    while (j >= 0)
    {
        if (arr[i][j] == 'Q')
            return false;
        j--;
    }

    // Check upper-left diagonal
    i = row, j = col;
    while (i >= 0 && j >= 0)
    {
        if (arr[i][j] == 'Q')
            return false;
        i--;
        j--;
    }

    // Check lower-left diagonal
    i = row, j = col;
    while (i < arr.size() && j >= 0)
    {
        if (arr[i][j] == 'Q')
            return false;
        i++;
        j--;
    }

    return true;
}

void findQueen(int col, int n, vector<string> &arr, vector<vector<string>> &ans)
{
    if (col == n)
    {
        ans.push_back(arr);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, arr))
        {
            arr[row][col] = 'Q';
            findQueen(col + 1, n, arr, ans);
            arr[row][col] = '_';
        }
    }
}

int main()
{
    int n = 4;

    vector<string> arr(n, string(n, '_'));
    vector<vector<string>> ans;

    findQueen(0, n, arr, ans);

    // Print solutions
    for (const auto &sol : ans)
    {
        for (const string &row : sol)
        {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
