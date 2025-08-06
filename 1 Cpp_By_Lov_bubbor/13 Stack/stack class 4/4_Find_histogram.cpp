#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> prevSmallerElementIndex(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        while (s.top() != -1 && arr[i] <= arr[s.top()])
        {
            s.pop();
        }

        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> nextSmallerElementIndex(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(n);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (s.top() != n && arr[i] <= arr[s.top()])
        {
            s.pop();
        }

        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int findMaxWidth(vector<int> &arr, int n, vector<int> &PrevIdx, vector<int> &NextIdx)
{
    int maxans = 0;
    for (int i = 0; i < n; i++)
    {
        int len = arr[i];
        int width = NextIdx[i] - PrevIdx[i] - 1;
        maxans = max(maxans, width * len);
    }
    return maxans;
}

int main()
{
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    int n = arr.size();
    vector<int> PrevIdx = prevSmallerElementIndex(arr, n);
    cout << "prev index" << endl;
    for (auto v : PrevIdx)
    {
        cout << v << " ";
    }
    cout << endl;
    vector<int> NextIdx = nextSmallerElementIndex(arr, n);

    cout << "next index" << endl;
    for (auto v : NextIdx)
    {
        cout << v << " ";
    }
    cout << endl;
    cout << "Max Area: " << findMaxWidth(arr, n, PrevIdx, NextIdx) << endl;
    return 0;
}
