#include <iostream>
#include <string>
using namespace std;

bool isMatch(string s, string p, int si, int pi)
{
    if (si == s.size() && pi == p.size())
        return true;

    if (pi == p.size())
        return false;

    if (si == s.size())
    {
        for (int i = pi; i < p.size(); i++)
            if (p[i] != '*')
                return false;
        return true;
    }

    if (p[pi] == '?' || s[si] == p[pi])
    {
        return isMatch(s, p, si + 1, pi + 1);
    }

    if (p[pi] == '*')
    {
        bool ans1 = isMatch(s, p, si, pi + 1);
        bool ans2 = isMatch(s, p, si + 1, pi);
        return ans1 || ans2;
    }
    return false;
}
bool wildCrad(string s, string p)
{
    return isMatch(s, p, 0, 0);
}

int main(int argc, char const *argv[])
{
    string s = "cb", p = "?a";

    cout << wildCrad(s, p);
    return 0;
}
