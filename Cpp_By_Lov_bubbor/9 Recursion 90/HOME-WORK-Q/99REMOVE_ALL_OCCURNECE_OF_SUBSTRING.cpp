#include <iostream>
#include <vector>
using namespace std;
// with recursion

//  and with refrece var

void RemovePart(string &s, string part)
{

    if (s.find(part) == string::npos)
    {
        return;
    }
    if (s.find(part) != string::npos)
    {
        int in = s.find(part);
        s.erase(in, part.size());
    }

    RemovePart(s, part);
}

int main(int argc, char const *argv[])
{

    string s = "daabcbaabcbc", part = "abc";

    // with loop
    // while (s.find(part) != string::npos)
    // {

    //     int in = s.find(part);
    //     s.erase(in, part.size());
    // }

    //
    RemovePart(s, part);
    cout << s;

    return 0;
}
