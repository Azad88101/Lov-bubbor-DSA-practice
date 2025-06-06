#include <climits>
#include <iostream>
#include <unordered_set>
using namespace std;

int find(string s)
{

    unordered_set<char> ch;
    int maxi = INT_MIN;
    int h = 0, l = 0;
    while (h < s.length())
    {
        while (ch.find(s[h]) != ch.end())
        {
            ch.erase(s[l]);
            l++;
        }
        ch.insert(s[h]);
        maxi = max(maxi, h - l + 1);
        h++;
    }

    return maxi;
}

int main(int argc, char const *argv[])
{
    // string s = "abcabcbb";

    string s = "abcabcbb";
    cout << "Length of longest substring without repeating characters: " << find(s) << endl;
    return 0;

    // cout << find(s);/
    return 0;
}
