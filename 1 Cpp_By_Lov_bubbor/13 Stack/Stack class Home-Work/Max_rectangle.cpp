#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Yeh function har element ke liye uska previous smaller element ka index deta hai
vector<int> prevSmallerElementIndex(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1); // initially -1 push karte hain
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        // Jab tak top element current element se bada ya barabar hai, pop karte raho
        while (s.top() != -1 && arr[i] <= arr[s.top()])
        {
            s.pop();
        }

        // Store karte hain previous smaller element ka index
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

// Yeh function har element ke liye uska next smaller element ka index deta hai
vector<int> nextSmallerElementIndex(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(n); // initially array ke baahar ka index
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        // Jab tak top element current element se bada ya barabar hai, pop karte raho
        while (s.top() != n && arr[i] <= arr[s.top()])
        {
            s.pop();
        }

        // Store karte hain next smaller element ka index
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

// Yeh function histogram ke base par maximum rectangle area calculate karta hai
int findMaxWidth(vector<int> &arr, int n)
{
    vector<int> PrevIdx = prevSmallerElementIndex(arr, n);
    vector<int> NextIdx = nextSmallerElementIndex(arr, n);
    int maxans = 0;

    for (int i = 0; i < n; i++)
    {
        int len = arr[i];                        // height of the bar
        int width = NextIdx[i] - PrevIdx[i] - 1; // width calculate karte hain
        maxans = max(maxans, width * len);       // max area update karte hain
    }
    return maxans;
}

// Yeh function binary matrix mein maximum rectangle area find karta hai
int findMaxArea(vector<vector<int>> &arr, int n)
{
    // Pehli row ke liye max area nikaalte hain
    int area = findMaxWidth(arr[0], n);

    // Har row ko histogram ki tarah treat karte hain
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            // Agar current cell 1 hai to uske upar wale value mein add kar do
            if (arr[i][j] != 0)
            {
                arr[i][j] = arr[i][j] + arr[i - 1][j];
            }
            else
            {
                arr[i][j] = 0; // agar 0 mila to histogram height bhi 0 ho jaayegi
            }
        }

        // har row ke liye area update karte hain
        area = max(area, findMaxWidth(arr[i], n));
    }
    return area;
}

int main()
{
    // Input binary matrix
    vector<vector<int>> arr = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0}};
    int n = arr.size();

    // Final maximum rectangle area print karna
    cout << findMaxArea(arr, n);
    return 0;
}
