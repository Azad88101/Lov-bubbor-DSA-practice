#include <iostream>
#include <stack>
using namespace std;

void insert_value_in_sorted_stack(stack<int> &s, int t)
{

    if (s.empty())
    {
        s.push(t);
        return;
    }
    if (t <= s.top())
    {
        s.push(t);
        return;
    }

    int val = s.top();
    s.pop();
    insert_value_in_sorted_stack(s, t);
    s.push(val);
}

void Sort(stack<int> &s)
{

    if (s.empty())
        return;

    int t = s.top();
    s.pop();
    Sort(s);
    insert_value_in_sorted_stack(s, t);
}

int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(4);
    s.push(6);
    s.push(4);
    s.push(4);
    s.push(8);
    s.push(1);
    s.push(19);

    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    Sort(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
