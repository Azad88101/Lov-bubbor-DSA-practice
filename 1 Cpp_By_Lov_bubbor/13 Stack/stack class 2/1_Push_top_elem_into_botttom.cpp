#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int t)
{

    if (st.empty())
    {
        st.push(t);
        return;
    }

    int val = st.top();
    st.pop();
    solve(st, t);
    st.push(val);
}
void push_top_into_bottom(stack<int> &st)
{
    if (st.empty())
    {
        cout << "cant insert at botom";
        return;
    }
    int t = st.top();
    st.pop();
    solve(st, t);
}

int main(int argc, char const *argv[])
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);

    push_top_into_bottom(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
