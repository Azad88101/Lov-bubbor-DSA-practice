
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// app 1

void firstNegInt(vector<int> &arr, int k, vector<int> &ans)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int v = 0;
        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                v = arr[j];
                break;
            }
        }
        ans.push_back(v);
    }
}

/////      aproach    2

/// using queue

void firstNegInt_Queue(vector<int> &arr, int k, vector<int> &ans)
{
    int n = arr.size();
    queue<int> q;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push(i);
        }
    }

    for (int i = k; i < n; i++)
    {
        if (!q.empty())
            cout << arr[q.front()] << " ";
        else
            cout << 0 << " ";

        // out of window elem ko remove krdo

        while ((!q.empty()) && (i - q.front() >= k))
        {
            q.pop();
        }

        if (arr[i] < 0)
        {
            q.push(i);
        }
    }

    if (!q.empty())
        cout << arr[q.front()] << " ";
    else
        cout << 0 << " ";
}

int main(int argc, char const *argv[])
{

    vector<int> arr = {-8, 2, 3, -6, 10};
    int k = 2;

    // app 1
    vector<int> ans;

    // firstNegInt(arr, k, ans);
    firstNegInt_Queue(arr, k, ans);
    // for (auto v : ans)
    // {
    //     cout << v << " ";
    // }
    return 0;
}

 