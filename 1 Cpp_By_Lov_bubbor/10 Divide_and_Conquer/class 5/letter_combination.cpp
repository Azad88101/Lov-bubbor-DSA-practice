#include <iostream>
#include <vector>
#include <map>
using namespace std;

void findComb(int i, string str, map<int, string> &mp, string output, vector<string> &ans)
{
    if (i >= str.size())
    {
        ans.push_back(output);

        return;
    }

    int digit = str[i] - '0';

    for (int j = 0; j < mp[digit].size(); j++)
    {
        string temp = mp[digit];
        output.push_back(temp[j]);
        findComb(i + 1, str, mp, output, ans);
        output.pop_back();
    }
}

int main(int argc, char const *argv[])
{

    string str = "23";
    string output = "";

    vector<string> ans;

    int digit = str[0] - '0';
    cout << digit << '\n';

    map<int, string> mp;
    mp[2] = "abc";
    mp[3] = "def";
    mp[4] = "ghi";
    mp[5] = "jkl";
    mp[6] = "mno";
    mp[7] = "pqrs";
    mp[8] = "tuv";
    mp[9] = "wxyz";

    findComb(0, str, mp, output, ans);
    // for (auto v : mp)
    // {
    //     cout << v.first << " " << v.second << "\n";
    // }

    for (auto v : ans)
    {
        cout << v << '\n';
    }
    return 0;
}
