#include <iostream>
#include <climits>
#include <unordered_set>
using namespace std;

int findLonSubLen(string s)
{
    int l = 0;
    int h = 0;
    int maxx = INT_MIN;
    unordered_set<char> set;

    while (h < s.length())
    {
        while (set.find(s[h]) != set.end())
        {
            set.erase(s[l]);
            l++;
        }
        set.insert(s[h]);
        maxx = max(maxx, h - l + 1);

        h++;
    }

    return maxx;
}

int main(int argc, char const *argv[])
{
    string s = "fffsdferrrrfffffergmn,mnfa,msnd.m,ns.,mnf.m,ad";
    // string s = "pwwkewxpw";
    cout << findLonSubLen(s);

    return 0;
}
   