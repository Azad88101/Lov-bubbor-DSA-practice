#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;
    // .3rd approach using sort and  coampare functon
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    int ans = s.compare(t);
    if (ans == 0)
        return true;
    else
        return false;

    // 2nd approach using math operations 222222222222222222222

    // if (s.length() != t.length())
    //     return false;
    // int sumS = 0;
    // int sumT = 0;
    // long long ProdS = 1;
    // long long ProdT = 1;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     sumS += s[i];
    //     sumT += t[i];
    //     ProdS *= s[i];
    //     ProdT *= t[i];
    // }
    // if (sumS == sumT && ProdS == ProdT)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    // my approoach working fine break some points 11111111111111111111

    // if (s.length() != t.length())
    //     return false;

    // int i = 0;
    // while (i < t.length())
    // {

    //     int pos = s.find(t[i]);
    //     if (pos == string::npos)
    //     {
    //         return false;
    //     }
    //     else
    //     {
    //         t.erase(i, 1);
    //         s.erase(pos, 1);
    //     }
    //     i++;
    // }
    // return true;
}
int main(int argc, char const *argv[])
{
    string s = "SCHOOL MASTER", t = "THE CLASSROOM";

    bool ans = isAnagram(s, t);
    cout << ans;
    return 0;
}
