#include <iostream>
using namespace std;

int findLastOcc(string s, char t, int i, int idx)
{
    // if (i > s.size())
    // {
    //     return -1;
    // }
    // if (s[s.size() - 1 - i] == t)
    // {
    //     cout<<(s.size()) - 1 - i;
    //     return s.size();
    // }

    if (s[i]=='\0')
    {
        return idx;
    }
    if (s[i] == t)
    {
        idx = i;

        // return i;
    }

    return findLastOcc(s, t, i + 1, idx);
}
int main(int argc, char const *argv[])
{
    string s = "aahjkl";
    char t = 'l';
    int idx = -1;
    cout << findLastOcc(s, t, 0, idx)+1;

    return 0;
}
