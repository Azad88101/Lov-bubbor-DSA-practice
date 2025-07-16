#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int n = arr.size();
    int row = n;
    int col = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << " \n";
    }
    cout << " \n";

    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {

            int temp = arr[n - 1 - j][i];
            arr[n - 1 - j][i] = arr[n - 1 - i][n - j - 1];
            arr[n - 1 - i][n - j - 1] = arr[j][n - 1 - i];
            arr[j][n - 1 - i] = arr[i][j];
            arr[i][j] = temp;
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << " \n";
    }

    return 0;
}
