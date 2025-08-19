#include <iostream>
// #include <vector>
#include <queue>
#include <stack>
using namespace std;

void Reverse(int k, queue<int> &q)
{

    int n = q.size();

    // if(k<=0||k>n)return;
    if (n < k)
        k = k % n;

    stack<int> s;
    int i = 0;
    while (i < k && !q.empty())
    {
        s.push(q.front());
        q.pop();
        i++;
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    i = 0;
    while (i < n - k)
    {
        int v = q.front();
        q.pop();
        q.push(v);
        i++;
    }
    return;
}

void printQ(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}
int main(int argc, char const *argv[])
{
    // int k = 4;
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);

    printQ(q);
    Reverse(0, q);

    printQ(q);

    return 0;
}
