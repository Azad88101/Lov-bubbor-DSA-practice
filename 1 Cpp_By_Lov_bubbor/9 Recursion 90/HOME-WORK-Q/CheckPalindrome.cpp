#include <iostream>
using namespace std;
bool check(string &s, int st, int e)
{
    if (st >= e)
    {
        return true;
    }
    if (s[st] != s[e])
    {
        return false;
    }
    return check(s, st + 1, e - 1);
}
int main(int argc, char const *argv[])
{

    string s = "racecar";
    int st = 0;
    int e = s.length() - 1;
    bool ans = check(s, st, e);

    cout<<ans;

    return 0;
}
