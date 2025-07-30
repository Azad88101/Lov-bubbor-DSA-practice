#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int t)
{
    if (s.empty())
    {
        s.push(t);
        return;
    }

    int val = s.top();
    s.pop();
    solve(s, t);
    s.push(val);
}
void reverse_stack(stack<int> &s)
{
    if (s.empty())
    {

        return;
    }
    int t = s.top();
    s.pop();
    reverse_stack(s);
    solve(s, t);
}

int main(int argc, char const *argv[])
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    reverse_stack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
