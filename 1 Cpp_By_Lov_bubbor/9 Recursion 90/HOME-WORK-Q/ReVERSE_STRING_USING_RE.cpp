#include <iostream>
using namespace std;

void reverse(string &st, int &s, int &e)
{
    if (s >= e)
        return;
    swap(st[s], st[e]);
    s++;
    e--;
    reverse(st, s, e);
}
int main(int argc, char const *argv[])
{
    string st = "abcdefg";
    cout << st<<endl;

    int s = 0;
    int e = st.length() - 1;
    reverse(st, s, e);

    cout << st;

    return 0;
}
