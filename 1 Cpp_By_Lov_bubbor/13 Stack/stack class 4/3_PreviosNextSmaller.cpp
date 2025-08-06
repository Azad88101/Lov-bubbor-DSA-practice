#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void prevSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);

    for (int i = 0; i < arr.size(); i++)
    {

        while (arr[i] <= s.top())
        {
            s.pop();
        }

        int temp = s.top();
        s.push(arr[i]);
        arr[i] = temp;
    }
}

int main()
{
    vector<int> arr = {2, 1, 4, 3};
    int n = arr.size();
    prevSmallerElement(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}