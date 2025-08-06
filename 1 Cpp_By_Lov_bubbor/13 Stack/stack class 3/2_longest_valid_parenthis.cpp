#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int maxValidParenthesis(string &str)
{
    stack<int> s;
    s.push(-1);
    int maxlen = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            s.push(i);
        }
        else
        {
            s.pop();
            if (s.empty())
                s.push(i);
            else
            {
                int len = i - s.top();

                maxlen = max(maxlen, len);
            }
        }
    }

    return maxlen;
}
int main(int argc, char const *argv[])
{
    string s = "(((())))(((())";

    cout << maxValidParenthesis(s);
    return 0;
}
