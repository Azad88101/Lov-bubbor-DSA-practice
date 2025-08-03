
#include <iostream>
#include <vector>

#include <stack>
using namespace std;

void byLoops_on2(vector<int> &arr)
{

    vector<int> ans;

    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int small = INT_MAX;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                small = min(small, arr[j]);
            }
        }

        if (small == INT_MAX)
            ans.push_back(-1);
        else
            ans.push_back(small);
    }

    ans.push_back(-1); // Last element has no next, so push -1

    for (auto v : ans)
        cout << v << " ";

    cout << "\n";
}

void byStack_on(vector<int> &arr)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(arr.size() - 1);

    int i = arr.size() - 1;
    while (i >= 0)
    {

        while (arr[i] <= s.top())
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(arr[i]);

        i--;
    }

    
    for (auto v : ans)
    {
        cout << v << " ";
    }
}

int main()
{
    vector<int> arr = {2, 1, 4, 3};

    byLoops_on2(arr);
    byStack_on(arr);
    return 0;
}
