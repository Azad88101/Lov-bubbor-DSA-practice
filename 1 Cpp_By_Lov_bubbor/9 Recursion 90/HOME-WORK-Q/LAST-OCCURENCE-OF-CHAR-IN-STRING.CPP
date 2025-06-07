#include <iostream>
#include <vector>
using namespace std;

int findIndex(string s, char c, int i, int n)
{

    // if (i >= s.length())
    if (i<=0)
    {
        return n;
    }
    if (s[i] == c)
    {
        // right to  left
        n = i;
        return n;
    }
    return findIndex(s, c, i - 1, n);
}

int main(int argc, char const *argv[])
{
    string s = "aabbcddefgd";
    char c = 'd';
    int i = s.length()-1;
    int n = -1;
    cout << findIndex(s, c, i, n);

    return 0;
}
