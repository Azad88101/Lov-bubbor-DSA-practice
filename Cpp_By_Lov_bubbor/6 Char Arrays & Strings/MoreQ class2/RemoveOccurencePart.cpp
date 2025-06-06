#include <iostream>
#include <string>
using namespace std;

string remove(string s, string part)
{
    // int i = 0;
    // // string ans;
    // string copy = s;

    // while (i < copy.length())
    // {

    //     int ans = s.find(part);
    //     if (ans < s.length())
    //     {
    //         s.erase(ans, part.length());
    //     }

    //     i++;
    // }

    // return s;

    int position = s.find(part);

    while (position != string::npos)
    {
        s.erase(position, part.length());
        position = s.find(part);
    }
    return s;
}
int main(int argc, char const *argv[])
{
    string s = "daabcbaabcbc", part = "abc";
    cout << remove(s, part);
    return 0;
}
