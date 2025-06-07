// #include <iostream>
// #include <vector>
// using namespace std;

// bool searchMatrix(vector<vector<int>> &matrix, int target)
// {
//     int s = 0;
//     int row = matrix.size();
//     int col = matrix[0].size();
//     int e = row * col - 1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         int rowIndex = mid / col;
//         int colIndex = mid % col;
//         if (matrix[rowIndex][colIndex] == target)
//         {
//             return true;
//         }
//         else if (matrix[rowIndex][colIndex] < target)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     return false;
// }

// int main()
// {
//     vector<vector<int>> arr{
//         {1, 4}, {2, 5}};
//     int target = 2;
//     bool a = searchMatrix(arr, target);
//     if (a)
//     {
//         cout << "true";
//     }
//     else
//     {
//         cout << "false";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    int r = 0;        // Start at the first row
    int c = cols - 1; // Start at the last column

    while (r < rows && c >= 0)
    {
        if (matrix[r][c] == target)
        {
            return true; // Target found
        }
        else if (matrix[r][c] > target)
        {
            c--; // Move left
        }
        else
        {
            r++; // Move down
        }
    }
    return false; // Target not found
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 4}, {2, 5}
    };
    int target = 2;
    bool result = searchMatrix(matrix, target);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
