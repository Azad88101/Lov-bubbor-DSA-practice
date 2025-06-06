#include <iostream>
#include <vector>
using namespace std;
vector<int> findClosest(vector<int> a, int k, int x)
{
    int l = 0;
    int h = a.size() - 1;
    while (h - l > k)
    {
        if (x - a[l] > a[h] - x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    vector<int> ans;
    for (int i = l; i <= h; i++)
    {
        cout << a[i] << "  ";
        ans.push_back(a[i]);
    }
    cout << "\n";
    for (auto i : ans)
    {
        cout << i;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr{4, 5, 8, 12, 16, 18, 40, 60, 90};
    int k = 4;
    int x = 12;
    findClosest(arr, k, x);
    return 0;
}
