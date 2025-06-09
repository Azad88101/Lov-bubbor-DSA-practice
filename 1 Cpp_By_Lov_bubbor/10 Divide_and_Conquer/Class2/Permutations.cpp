#include <iostream>
using namespace std;

void findAllPer(string &s, int i)
{
    if (i >= s.size())
    {
        cout << s << " ";

        return;
    }

    for (int j = i; j < s.size(); j++)
    {
        swap(s[i], s[j]);
        findAllPer(s, i + 1);
        swap(s[i], s[j]);
    }
}

int main(int argc, char const *argv[])
{
    string s = "abc";
    findAllPer(s, 0);

    return 0;
}
