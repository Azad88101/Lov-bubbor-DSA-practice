#include <iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

void maxSlidingWindow_Help(vector<int> &arr, int k, vector<int> &ans)
{
    deque<int> dq;

    for (int i = 0; i < k; i++)
    {

        if (!dq.empty() && arr[i] >= arr[dq.back()])
        {
            while (!dq.empty())
            {
                dq.pop_back();
            }
        }
        dq.push_back(i);
    }

    for (int i = k; i < arr.size(); i++)
    {
        if (!dq.empty())
        {
            cout << arr[dq.front()] << "  ";
            ans.push_back(arr[dq.front()]);
        }

        if (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }

        while (!dq.empty() && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }

        dq.push_back(i);
    }
}

int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};

    vector<int> ans;

    maxSlidingWindow_Help(arr, 3, ans);
    cout << "\n";
    for (auto v : ans)
    {
        cout << v << " ";
    }
    cout << "\n";

    return 0;
}
