#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int i, int j, int row, int col, vector<vector<int>> &arr, vector<vector<bool>> &visit)
{

    if ((i >= 0 && i < row) && (j >= 0 && j < col) && arr[i][j] == 1 && visit[i][j] == false)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Rat_In_Maze(int i, int j, int row, int col, vector<vector<int>> &arr, vector<vector<bool>> &visit, vector<string> &paths, string output)
{
    if (i == row - 1 && j == col - 1)
    {
        paths.push_back(output);
        return;
    }

    // down i+1

    if (isSafe(i + 1, j, row, col, arr, visit))
    {
        visit[i + 1][j] = true;

        Rat_In_Maze(i + 1, j, row, col, arr, visit, paths, output + " D");
        visit[i + 1][j] = false;
    }

    // right j+1

    if (isSafe(i, j + 1, row, col, arr, visit))
    {
        visit[i][j + 1] = true;

        Rat_In_Maze(i, j + 1, row, col, arr, visit, paths, output + " R");
        visit[i][j + 1] = false;
    }

    // left j-1

    if (isSafe(i, j - 1, row, col, arr, visit))
    {
        visit[i][j - 1] = true;

        Rat_In_Maze(i, j - 1, row, col, arr, visit, paths, output + " L");
        visit[i][j - 1] = false;
    }

    // up i-1;

    if (isSafe(i - 1, j, row, col, arr, visit))
    {
        visit[i - 1][j] = true;

        Rat_In_Maze(i - 1, j, row, col, arr, visit, paths, output + " U");
        visit[i - 1][j] = false;
    }
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> arr = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}};
    int row = arr.size();
    int col = arr[0].size();
    // vector<vector<bool>>visit(row,vector<bool>vist(col,false));
    vector<vector<bool>> visit(row, vector<bool>(col, false));
    visit[0][0] = true;
    vector<string> paths;

    string output;

    if (arr[0][0] == 1)
    {
        visit[0][0] = true;
        Rat_In_Maze(0, 0, row, col, arr, visit, paths, "");
    }

    if (paths.empty())
    {
        cout << "No path found\n";
    }
    else
    {
        for (auto &path : paths)
        {
            cout << path << endl;
        }
    }
    // Rat_In_Maze(0, 0, row, col, arr, visit, paths, output);

    return 0;
}
