#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Approach1
void using_stack(queue<int> q)
{
    stack<int> s;

    while (!q.empty())

    {
        cout << q.front() << " ";
        s.push(q.front());
        q.pop();
    }
    cout << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        q.push(s.top());
        s.pop();
    }
    cout << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
// Approach2
void rev_rec(queue<int> &q)
{
    if (q.empty())
        return;
    int v = q.front();
    q.pop();
    rev_rec(q);
    q.push(v);
}
int main(int argc, char const *argv[])
{
    queue<int> q;
    // cout<<q.front();

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    rev_rec(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
