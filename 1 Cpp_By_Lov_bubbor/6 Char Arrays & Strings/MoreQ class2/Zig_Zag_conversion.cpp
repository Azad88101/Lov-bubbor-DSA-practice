#include <iostream>
#include <vector>
using namespace std;

string zig_zag(string s, int nRow)
{
    if (nRow == 1)
        return s;
    int row = 0;
    vector<string> ans(nRow);
    bool dir = true;

    for (auto c : s)
    {
        if (dir)
        {
            while (row < nRow)
                ans[row++].push_back(c);

            row = nRow - 2;
        }
        else
        {
            while (row >= 0)
                ans[row--].push_back(c);

            row = 1;
        }
        dir = !dir;
    }

    string man = "";
    for (int i = 0; i < ans.size(); i++)
    {
        man += ans[i];
    }
    return man;
}
int main(int argc, char const *argv[])
{

    string s = "PAYPALISHIRING";

    cout << zig_zag(s, 3);
    return 0;
}
