
#include <iostream>
#include <vector>
using namespace std;

class MinStack
{

    vector<pair<int, int>> st;

public:
    MinStack() {}

    void push(int val)
    {

        if (st.empty())
        {
            pair<int, int> p = make_pair(val, val);
            st.push_back(p);
        }
        else
        {
            pair<int, int> p;
            p.first = val;
            p.second = min(val, st.back().second);
            st.push_back(p);
        }
    }

    void pop() { st.pop_back(); }

    int top() { return st.back().first; }

    int getMin() { return st.back().second; }
};
int main()
{
    MinStack s;

    s.push(5);
    s.push(3);
    s.push(7);
    s.push(2);

    cout << "Top: " << s.top() << endl;
    cout << "Min: " << s.getMin() << endl;

    s.pop();
    cout << "Top after pop: " << s.top() << endl;
    cout << "Min after pop: " << s.getMin() << endl;

    s.pop();
    cout << "Min after another pop: " << s.getMin() << endl;

    return 0;
}
