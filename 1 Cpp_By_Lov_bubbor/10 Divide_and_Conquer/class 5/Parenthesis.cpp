#include <iostream>
#include <vector>
using namespace std;

void Solve(int n, int open, int close, vector<string> &ans, string output)
{
    if (open == 0 && close == 0)
    {
        ans.push_back(output);
        return;
    }

    if (open > 0)
    {
        output.push_back('(');
        Solve(n, open - 1, close, ans, output);

        output.pop_back();
    }

    if (close > open)
    {
        output.push_back(')');
        Solve(n, open, close - 1, ans, output);

        output.pop_back();
    }
}
int main(int argc, char const *argv[])
{
    int n = 3;
    int open = n, close = n;

    vector<string> ans;
    string optput;

    Solve(n, open, close, ans, optput);

    for (auto v : ans)
    {
        cout << v << " ";
    }
    return 0;
}
