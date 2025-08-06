#include <iostream>
#include <vector>
using namespace std;

bool knows(int a, int b, vector<vector<int>> &mat)
{
    return mat[a][b];
}

int find_celeb(int n, vector<vector<int>> mat)
{
    if (n == 1)
        return 0;
    for (int i = 0; i < n; i++)
    {
        bool celeb = 1;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (knows(i, j, mat) || !knows(j, i, mat))
            {
                celeb = 0;
                break;
            }
        }
        if (celeb)
            return i;
    }

    return -1;
}
int main(int argc, char const *argv[])
{
    int n = 1;
    // vector<vector<int>> mat = {{1, 1, 0}, {0, 1, 0}, {0, 1, 1}};
    // vector<vector<int>> mat = {{1, 1}, {1, 1}};
    vector<vector<int>> mat = {{1, 1}};

    cout << find_celeb(n, mat);
    return 0;
}
