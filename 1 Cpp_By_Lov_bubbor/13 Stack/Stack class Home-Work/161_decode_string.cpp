#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "3[a]2[bc]";

    stack<string> st;

    for (auto ch : s)
    {
        if (ch == ']')
        {

            string repeat = "";
            while (!st.empty() && !isdigit(st.top()[0]))
            {
                string top = st.top();
                repeat += top;
                st.pop();
            }

            string times = "";

            while (!st.empty() && isdigit(st.top()[0]))
            {
                times += st.top();
                st.pop();
            }

            reverse(times.begin(), times.end());
            int n = stoi(times);

            string decoded = "";
            while (n--)
            {
                decoded += repeat;
            }
            st.push(decoded);
        }
        else if (ch != '[')
        {
            string temp(1, ch);
            st.push(temp);
        }
    }

    string ans;

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans << endl;
    reverse(ans.begin(), ans.end());

    cout << ans;
    return 0;
}
