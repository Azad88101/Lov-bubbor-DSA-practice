#include <iostream>
#include <vector>
#include <set>

using namespace std;

void normalPerm(vector<int> &s, int j, set<vector<int>> &ans)
{
    if (j >= s.size())
    {
        ans.insert(s);
        return;
    }
    for (int i = j; i < s.size(); i++)
    {
        swap(s[i], s[j]);
        normalPerm(s, j + 1, ans);
        swap(s[i], s[j]);
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 1, 2};
    // vector<vector<int>> ans;
    set<vector<int>> ans;
    normalPerm(arr, 0, ans);

        for (auto &v : ans)
    {
        for (auto &e : v)
        {
            cout << e;
        }
        cout << '\n';
    }
    return 0;
}
