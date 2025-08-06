

#include <iostream>
#include <string>
#include <stack>
using namespace std;

string buildAns(stack<string> st, string ans)
{
    stack<string> a;
    while (!st.empty())
    {
        a.push(st.top());
        st.pop();
    }
    // reverse(ans.begin(), ans.end());

    while (!a.empty())
    {
        ans += a.top();
        a.pop();
    }
    return ans;
}
string simplifyPath(string path)
{
    stack<string> st;
    int i = 0;
    int n = path.size();
    while (i < n)
    {

        int start = i;
        int end = i + 1;
        while (end < n && path[end] != '/')
        {
            end++;
        }
        i = end;
        string temp = path.substr(start, end - start);

        if (temp == "/" || temp == "/.")
        {
            continue;
        }
        if (temp != "/..")
        {

            st.push(temp);
        }
        else if (!st.empty())
        {
            st.pop();
        }
    }

    string ans = st.empty() ? "/" : "";

    return buildAns(st, ans);
}
int main(int argc, char const *argv[])
{

    string s = "/a/bc/abc/ab/../a/./b//..///../c/../c";

   cout<< simplifyPath(s);
    return 0;
}