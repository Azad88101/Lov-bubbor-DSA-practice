// #include <iostream>
// #include <vector>
// using namespace std;

// // vector<int> Spiral(vector<vector<int>> arr)
// // {
// //     int row = arr.size();
// //     int col = arr[0].size();
// //     int startRow = 0;
// //     int endCol = col - 1;
// //     int endRow = row - 1;
// //     int startCol = 0;
// //     int count = 0;
// //     vector<int> ans;

// //     while (count < row * col)
// //     {
// //         // first row
// //         for (int i = startCol; i < endCol &&count <row*col; i++)
// //         {
// //             ans.push_back(arr[startRow][i]);
// //             count++;
// //         }
// //         startRow++;

// //         /// end col
// //         for (int i = startRow; i < endRow && count <row*col; i++)
// //         {
// //             ans.push_back(arr[i][endCol]);
// //             count++;
// //         }
// //         endCol--;
// //         /// end row
// //         for (int i = endCol; i >= startCol && count <row*col; i--)
// //         {
// //             ans.push_back(arr[endRow][i]);
// //             count++;
// //         }
// //         endRow--;
// //         // first col
// //         for (int i = endRow; i >= startRow &&count <row*col ; i--)
// //         {
// //             ans.push_back(arr[i][startCol]);
// //             count++;
// //         }
// //         startCol++;
// //     }
// //     return ans;
// // }
// // int main(int argc, char const *argv[])
// // {
// //     vector<vector<int>> arr{
// //         {1, 2, 3},
// //         {4, 5, 6},
// //         {7, 8, 9},
// //         {10, 11, 12}};
// //     vector<int> ans = Spiral(arr);
// //     for (auto i : ans)
// //     {
// //         cout << i;
// //     }
// //     return 0;
// // }

// // ```inCppByLov / Arrays / 2D array / SpiralPrint.cpp
// vector<int> Spiral(vector<vector<int>> arr)
// {
//     int row = arr.size();
//     int col = arr[0].size();
//     int startRow = 0;
//     int endCol = col - 1;
//     int endRow = row - 1;
//     int startCol = 0;
//     int count = 0;
//     vector<int> ans;

//     while (count < row * col)
//     {
//         // first row
//         for (int i = startCol; i <= endCol && count < row * col; i++) // Changed < to <=
//         {
//             ans.push_back(arr[startRow][i]);
//             count++;
//         }
//         startRow++;

//         // end col
//         for (int i = startRow; i <= endRow && count < row * col; i++) // Changed < to <=
//         {
//             ans.push_back(arr[i][endCol]);
//             count++;
//         }
//         endCol--;

//         // end row
//         for (int i = endCol; i >= startCol && count < row * col; i--) // No change needed
//         {
//             if (endRow >= startRow)
//             { // Added check to prevent out-of-bounds
//                 ans.push_back(arr[endRow][i]);
//                 count++;
//             }
//         }
//         endRow--;

//         // first col
//         for (int i = endRow; i >= startRow && count < row * col; i--) // No change needed
//         {
//             if (startCol <= endCol)
//             { // Added check to prevent out-of-bounds
//                 ans.push_back(arr[i][startCol]);
//                 count++;
//             }
//         }
//         startCol++;
//     }
//     return ans;
// }

// int main(int argc, char const *argv[])
// {
//     vector<vector<int>> arr{
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9},
//         {10, 11, 12}};
//     vector<int> ans = Spiral(arr);
//     for (auto i : ans)
//     {
//         cout << i;
//     }
//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

vector<int> Spiral(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();
    int startRow = 0;
    int endCol = col - 1;
    int endRow = row - 1;
    int startCol = 0;
    int count = 0;
    vector<int> ans;

    while (count < row * col)
    {
        // first row
        for (int i = startCol; i <= endCol && count < row * col; i++) // Fixed: i <= endCol
        {
            ans.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;

        // end col
        for (int i = startRow; i <= endRow && count < row * col; i++) // Fixed: i <= endRow
        {
            ans.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;

        // end row
        for (int i = endCol; i >= startCol && count < row * col; i--)
        {
            ans.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;

        // first col
        for (int i = endRow; i >= startRow && count < row * col; i--)
        {
            ans.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> arr{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};
    vector<int> ans = Spiral(arr);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
