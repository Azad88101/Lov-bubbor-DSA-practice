
#include <iostream>

#include <stack>
using namespace std;

int main()
{
    int len = 0, maxl = 0;
    string s = "(()()(())";

    stack<int> st;
    st.push(-1);
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '(')
        {
            st.push(i);
        }
        else
        {
            st.pop();
            if (st.empty())
            {
                st.push(i);
            }
            else
            {

                len = i - st.top();
                maxl = max(len, maxl);
            }
        }
    }

    cout << "max length  " << maxl;

    return 0;
}
