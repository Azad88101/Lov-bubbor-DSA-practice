#include <iostream>
#include <string>
using namespace std;

string removeAllOccurence(string s, string part)
{
    // cout<<s.length();

    // my method 1111111111111111111
    // int i = 0;
    // string com = s;
    // while (i <= com.length())
    // {
    //     int ans = s.find(part);
    //     if (ans < s.length())
    //     {
    //         s.erase(ans, part.length());
    //     }

    //     // cout << ans;
    //     i++;
    // }
    // return s;

    // bubbor methdo 2222222222222222222222222222222222

    int pos = s.find(part);
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}
int main(int argc, char const *argv[])
{
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeAllOccurence(s, part);
    return 0;
}
