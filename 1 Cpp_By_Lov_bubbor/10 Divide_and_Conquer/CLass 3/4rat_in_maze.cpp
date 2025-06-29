#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(vector<vector<int>> &arr, int i, int j, int row, int col, vector<vector<bool>> &visited)
{
    if ((i >= 0 && i < row) && (j >= 0 && j < col) && arr[i][j] == 1 && visited[i][j] == false)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void RatInMaze(vector<vector<int>> &arr, int i, int j, int row, int col, string s, vector<vector<bool>> &visited)
{
    if (i == row - 1 && j == col - 1)
    {
        cout << s << '\n';
        return;
    }
    // Down
    if (isSafe(arr, i + 1, j, row, col, visited))
    {
        visited[i + 1][j] = true;
        RatInMaze(arr, i + 1, j, row, col, s + 'D', visited);

        visited[i + 1][j] = false;
    }

    // left
    if (isSafe(arr, i, j - 1, row, col, visited))
    {
        visited[i][j - 1] = true;
        RatInMaze(arr, i, j - 1, row, col, s + 'L', visited);

        visited[i][j - 1] = false;
    }

    // right

    if (isSafe(arr, i, j + 1, row, col, visited))
    {
        visited[i][j + 1] = true;
        RatInMaze(arr, i, j + 1, row, col, s + 'R', visited);

        visited[i][j + 1] = false;
    }

    // up

    if (isSafe(arr, i - 1, j, row, col, visited))
    {
        visited[i - 1][j] = true;
        RatInMaze(arr, i - 1, j, row, col, s + 'U', visited);

        visited[i - 1][j] = false;
    }

    return;
}
int main(int argc, char const *argv[])
{

    // DDRDRDRDLDLDDRRDDLDDLDRRDLLDRR
    vector<vector<int>> arr =
        {
            {1, 1, 1, 1},
            {1, 0, 0, 0},

        };
    int row = arr.size();
    int col = arr[0].size();
    // if (arr[0][0] == 0 || arr[row - 1][col - 1] == 0)
    // {
    //     cout << "No path possible from start to end.\n";
    //     return 0;
    // }

    int i = 0, j = 0;
    // vector<vector<int>>visited(0,vector<int>(arr.size()));
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    string s = "";
    visited[0][0] = true;
    // RatInMaze(arr, i, j, row, col, s, visited);

    string sec = "word";
    string temp = "";

    int k = 0;
    int size = sec.size() - 1;
    // if (size <= 10)
    // {
    //     cout << sec;
    // }
    // else
    // {

    //     while (k + 1 < size)
    //     {
    //         k++;
    //     }
    //     temp.push_back(sec[0]);
    //     temp += to_string(k);
    //     temp += sec[size];
    // }

    // cout << temp;

    return 0;
}

// word
// localization
// internationalization
// pneumonoultramicroscopicsilicovolcanoconiosis