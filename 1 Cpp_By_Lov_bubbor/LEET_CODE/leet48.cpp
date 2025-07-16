// rotate a image by 90degree

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = arr.size();
    int col = arr[0].size();
    vector<vector<int>> ans(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[j][col - i - 1] = arr[i][j];
        }
        // cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    return 0;
}
