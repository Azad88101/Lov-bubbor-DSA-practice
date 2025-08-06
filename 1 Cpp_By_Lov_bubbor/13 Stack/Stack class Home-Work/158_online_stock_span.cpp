#include <iostream>
#include <string>
#include <stack>
using namespace std;

class StockSpanner
{
public:
    stack<pair<int, int>> st;

    StockSpanner() {}

    int next(int price)
    {
        int span = 1;
        while (!st.empty() && st.top().first <= price)
        {
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
        return span;
    }
};

int main()
{
    StockSpanner stockSpanner;

    cout << stockSpanner.next(100) << endl; // 1
    cout << stockSpanner.next(80) << endl;  // 1
    cout << stockSpanner.next(60) << endl;  // 1
    cout << stockSpanner.next(70) << endl;  // 2
    cout << stockSpanner.next(60) << endl;  // 1
    cout << stockSpanner.next(75) << endl;  // 4

    return 0;
}
