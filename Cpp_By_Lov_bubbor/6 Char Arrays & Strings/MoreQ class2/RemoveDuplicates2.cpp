#include <iostream>
#include <string>
using namespace std;

string remove(string s)
{
    int i = 0;
    string ans;

    while (i < s.length())
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    string s = "abbaca";
    cout << remove(s);
    return 0;
}
