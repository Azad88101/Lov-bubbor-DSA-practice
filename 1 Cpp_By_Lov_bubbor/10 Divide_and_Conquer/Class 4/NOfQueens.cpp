#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row, int col, vector<vector<char>> arr)
{

    int i = row, j = col;
    // row check kro
    while (j >= 0)
    {
        if (arr[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }

    i = row, j = col;

    while (j >= 0 && i >= 0)
    {
        if (arr[i][j] == 'Q')
        {
            return false;
        }
        j--;
        i--;
    }
    i = row, j = col;

    while (j >= 0 && i < arr.size())
    {
        if (arr[i][j] == 'Q')
        {
            return false;
        }
        j--;
        i++;
    }

    return true;
}
void printSol(int n, vector<vector<char>> &arr)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << '\n';
    }
    cout << '\n';
    cout << '\n';

    return;
}

void findQueen(int col, int n, vector<vector<char>> &arr)
{

    if (col >= n)
    {
        printSol(n, arr);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, arr))
        {
            arr[row][col] = 'Q';
            findQueen(col + 1, n, arr);
            arr[row][col] = '-';
        }
    }
}

int main(int argc, char const *argv[])
{
    int n = 18;

    vector<vector<char>> arr(n, vector<char>(n, '-'));

    findQueen(0, n, arr);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    return 0;
}
