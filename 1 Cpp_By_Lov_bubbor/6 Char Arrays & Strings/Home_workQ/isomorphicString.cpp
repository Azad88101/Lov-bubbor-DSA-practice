#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t)
{

    int hash[256] = {0};
    bool isTcharsMapped[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (hash[s[i]] == 0 && isTcharsMapped[t[i]] == 0)
        {
            hash[s[i]] = t[i];

            isTcharsMapped[t[i]] = true;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (char (hash[s[i]]) != t[i])
            return false;
    }

    return true;
}
int main(int argc, char const *argv[])
{

    string s = "paper";
    string t = "title";

    bool ans = isIsomorphic(s, t);
    cout << ans;

    return 0;
}
