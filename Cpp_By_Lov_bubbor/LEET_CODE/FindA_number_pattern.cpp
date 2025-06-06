#include <iostream>
#include <cmath>

using namespace std;

int pattern(int numRows, int arr[][3])
{
    // User needs to implement the logic here

    int ans = 0;
    for (int r = 0; r < numRows; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (arr[r][c] == 0)
            {
                if (c == 0)
                {
                    ans = arr[r][c + 2] - arr[r][c + 1] * arr[r][c + 1];
                    ans = sqrt(ans);
                }
                if (c == 1)
                {
                    ans = arr[r][c + 1] - arr[r][c - 1] * arr[r][c - 1];
                    ans = sqrt(ans);
                }
                if (c == 2)
                {
                    ans = arr[r][c - 2] * arr[r][c - 2] + arr[r][c - 1] * arr[r][c - 1];
                }
            }
        }
    }
    return ans;
}

int main()
{
    int numRows;
    // Input the number of rows
    numRows = 5;

    int arr[numRows][3] = {
        {5, 5, 50},
        {0, 12, 225},
        {1, 1, 2},
        {3, 4, 25},
        {8, 7, 113}};
    // Get the array input
    // for (int i = 0; i < numRows; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cin >> arr[i][j];
    //     }
    // }
    // Call the function and print the result
    cout << pattern(numRows, arr) << endl;

    return 0;
}