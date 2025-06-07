#include <iostream>
#include <unordered_set>
using namespace std;
int findLngth(string s)
{
    int l = 0, h = 0;

    int maxi = -1;
    unordered_set<char> ch;
    while (h < s.length())
    {
        while (ch.find(s[h]) != ch.end())
        {
            ch.erase(s[l]);
            l++;
        }
        ch.insert(s[h]);
        maxi = max(maxi,h-l+1);
    }
}

int main(int argc, char const *argv[])
{
    string s = "abcabcbb";
    findLngth(s);

    return 0;
}
