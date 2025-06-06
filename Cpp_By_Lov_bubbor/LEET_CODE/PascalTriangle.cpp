#include <iostream>
#include <vector>
using namespace std;

void PascalTriangle(int n, vector<vector<int>> &result)
{

    if (n == 0)
    {
        return;
    }

    vector<int> firstRow = {1};
    result.push_back(firstRow);

    if (n == 1)
    {
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        vector<int> previousRow = result[i - 1];
        vector<int> newRow;

        newRow.push_back(1);
        for (int j = 0; j < i - 1; j++)
        {
            newRow.push_back(previousRow[j] + previousRow[j + 1]);
        }
        newRow.push_back(1);

        result.push_back(newRow);
        newRow.clear();
        previousRow.clear();
    }
    return;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> result;
    int n = 0;
    PascalTriangle(n, result);

    for (int i = 0; i < result.size(); i++)
    {
        if (n == i)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
