#include <iostream>
using namespace std;

void printSubsequence(string s, int i, string m)
{
    if (i >= s.size())
    {
        cout << m << " ";
        return;
    }

    printSubsequence(s, i + 1, m);
    m.push_back(s[i]);
    printSubsequence(s, i + 1, m);
}
int main(int argc, char const *argv[])
{
    string s = "abc";
    int i = 0;
    string m = "";
    printSubsequence(s, i, m);

    return 0;
}
