#include <iostream>
#include <vector>
using namespace std;

void PrintSol(int n, vector<vector<char>> &board)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';

    return;
}

bool isSafe(int row, int col, int n, vector<vector<char>> &board)
{
    // Check same row on left side
    for (int j = 0; j < col; j++)
    {
        if (board[row][j] == 'Q')
            return false;
    }

    // Check upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    // Check bottom-left diagonal
    for (int i = row, j = col; i < n && j >= 0; i++, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

void Solve(int col, int n, vector<vector<char>> &board)
{
    if (col >= n)
    {
        PrintSol(n, board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, n, board))
        {
            board[row][col] = 'Q';

            // Print the decision
            cout << "Placing Q at: (" << row << "," << col << ")\n";

            Solve(col + 1, n, board);

            // Print backtracking info
            cout << "Removing Q from: (" << row << "," << col << ")\n";
            board[row][col] = '-';
        }
    }
}

int main(int argc, char const *argv[])
{
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    Solve(0, n, board);
    return 0;
}
