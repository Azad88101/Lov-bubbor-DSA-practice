#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }

    cout << "sum, of the rows \n ";
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << "\n";
    }

    // get max number #define "" ""
    int max = INT_MIN;
    int sl = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                sl = max;
                max = arr[i][j];
            }
            else if (arr[i][j] > sl)
            {
                sl = arr[i][j];
            }
        }
    }
    cout << max << " " << sl;

    return 0;
}
