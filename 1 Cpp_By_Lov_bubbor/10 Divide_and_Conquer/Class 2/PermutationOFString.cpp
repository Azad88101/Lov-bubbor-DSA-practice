#include <iostream>
#include <string>
using namespace std;

void findPer(string &s, int i)
{

    if (s.size() <= i)
    {
        cout << s << " ";
        return;
    }

    for (int j = i; j < s.size(); j++)
    {
        swap(s[i], s[j]);
        findPer(s, i + 1);
        swap(s[i], s[j]); // backtrack
    }
}
int main(int argc, char const *argv[])
{
    string s = "abc";
    findPer(s, 0);
    return 0;
}
