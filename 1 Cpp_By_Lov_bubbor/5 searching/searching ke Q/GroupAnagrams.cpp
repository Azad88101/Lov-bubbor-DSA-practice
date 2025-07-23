#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<string> s = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string, vector<string>> mp;

    int i = 0;
    while (i < s.size())
    {
        string cp = s[i];
        sort(cp.begin(), cp.end());
        mp[cp].push_back(s[i]);
        i++;
    }

    for (auto &pair : mp)
    {
        for (auto &word : pair.second)
        {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}
