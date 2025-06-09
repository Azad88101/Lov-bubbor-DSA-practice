#include <iostream>
#include <vector>
using namespace std;

//  update galat kr rha tha i,j ko
// visit wale bhi wrong chek ho rhe the

bool isSafe(int i, int j, int row, int col, vector<vector<int>> arr, vector<vector<int>> visited)
{

    if (((i >= 0 && i < row) &&
         (j >= 0 && j < col)) &&
        (arr[i][j] == 1) &&
        (visited[i][j] == false)

    )
    {
        return true;
    }
    else{
        return false;
    }
}

void RateInMaze(vector<vector<int>> &arr, vector<vector<bool>> &visite, int i, int j, int row, int col, vector<string> &path, string output)
{

    if (i == arr.size() - 1 && j == arr[0].size() - 1)
    {

        path.push_back(output);

        return;
    }

    if (i + 1 < arr.size() && arr[i + 1][j] == 1 && !visite[i + 1][j])
    {
        visite[i + 1][j] = true;
        RateInMaze(arr, visite, i + 1, j, row, col, path, output + 'D');
        visite[i + 1][j] = false;
    }

    if (j + 1 < arr[0].size() && arr[i][j + 1] == 1 && !visite[i][j + 1])
    {
        // right ki call
        visite[i][j + 1] = true;
        RateInMaze(arr, visite, i, j + 1, row, col, path, output + 'R');
        visite[i][j + 1] = false;
    }

    if (j - 1 >= 0 && arr[i][j - 1] == 1 && !visite[i][j - 1])
    {
        // left ki call
        visite[i][j - 1] = true;
        RateInMaze(arr, visite, i, j - 1, row, col, path, output + 'L');
        visite[i][j - 1] = false;
    }

    if (i - 1 >= 0 && arr[i - 1][j] == 1 && !visite[i - 1][j])
    {
        // up ki call
        visite[i - 1][j] = true;
        RateInMaze(arr, visite, i - 1, j, row, col, path, output + 'U');
        visite[i - 1][j] = false;
    }
}

int main(int argc, char const *argv[])

{

    vector<vector<int>> arr = {

        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        // {0, 1, 1, 1},

    };

    int row = arr.size();
    int col = arr[0].size();
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    visited[0][0] = true;

    vector<string> path;
    string output = "";

    RateInMaze(arr, visited, 0, 0, row, col, path, output);

    for (auto v : path)
    {
        cout << v << " \n";
    }

    return 0;
}
