#include <iostream>
#include <vector>
using namespace std;

void revs(string &s, int i, int j)
{
    if (i >= j)
        return;
    swap(s[i], s[j]);
    revs(s, i + 1, j - 1);
}
int main()
{
    string s = "aabcd";

    cout << s << endl;

    revs(s, 0, s.size() - 1);
    cout << s;
    return 0;
}

