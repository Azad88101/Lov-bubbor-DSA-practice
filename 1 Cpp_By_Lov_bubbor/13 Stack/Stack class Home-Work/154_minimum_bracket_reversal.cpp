#include <iostream>
#include <string>
#include <stack>
using namespace std;

int minimumBracketRev(string s)
{

    stack<char> st;
    for (auto ch : s)
    {
        if (ch == '{')
            st.push(ch);

        else
        {
            if (!st.empty() && st.top() == '{')
                st.pop();

            else
                st.push(ch);
        }
    }

    int count = 0;

    while (!st.empty())
    {

        char ch = st.top();
        st.pop();
        if (ch == st.top())
        {
            count += 1;
        }
        else
        {
            count += 2;
        }
        st.pop();
    }
    return count;
}
int main(int argc, char const *argv[])
{

    string s = "}{{}}{{{";

    cout << minimumBracketRev(s);
    return 0;
}
