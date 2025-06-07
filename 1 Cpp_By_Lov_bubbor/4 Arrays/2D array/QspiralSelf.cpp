#include <iostream>
#include <vector>
using namespace std;
vector<int> spiral(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();
    vector<int> ans;

    int count = 0;
    int target = row * col;

    int startRow = 0;
    int lastcol = col - 1;
    int lastRow = row - 1;
    int startCol = 0;
    while (count < target)
    {
        
        if (startCol != lastcol)
        {

            // first row
            for (int i = startCol; i <= lastcol; i++)
            {
                // ans.push_back(arr[startRow][i]);
                cout << arr[startRow][i] << " ";
                count++;
                if (count == target)
                {
                    break;
                }
            }
            startRow++;
            // last col
            for (int i = startRow; i <= lastRow; i++)
            {
                cout << arr[i][lastcol] << " ";
                count++;
            }
            lastcol--;
            // last row
            for (int i = lastcol; i >= startCol; i--)
            {
                cout << arr[lastRow][i] << " ";
                count++;
            }
            lastRow--;

            // 1st column
            for (int i = lastRow; i >= startRow; i--)
            {
                cout << arr[i][startCol] << " ";
                count++;
            }
            startCol++;
        }
    }
}
int main(int argc, char const *argv[])
{
    vector<vector<int>> arr{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    spiral(arr);
    // vector<int> ans = spiral(arr);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i];
    // }

    return 0;
}
