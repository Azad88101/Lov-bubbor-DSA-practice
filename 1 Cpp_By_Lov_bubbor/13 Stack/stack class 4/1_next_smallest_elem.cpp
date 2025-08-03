#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmallEelm(vector<int> &arr)
{
    stack<int> s;
    vector<int> ans(arr.size());
    s.push(-1);
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (arr[i] <= s.top())
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(arr[i]);
    }
    for (auto v : ans)
    {
        cout << v << " ";
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {3724, 5151, 801, 1768, 6220};

    nextSmallEelm(arr);
    return 0;
}
