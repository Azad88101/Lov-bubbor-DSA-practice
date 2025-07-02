#include <iostream>
#include <vector>
using namespace std;

int RightPlace(vector<int> &arr, int s, int e)
{
    int pivotElm = arr[e];
    int pivotIdx = e;
    int cnt = 0;
    for (int i = s; i < e; i++)
    {
        if (pivotElm > arr[i])
        {
            cnt++;
        }
    }
    pivotIdx = s + cnt;
    swap(arr[e], arr[pivotIdx]);
    int i = s;
    int j = e;
    while (i < pivotIdx && j > pivotIdx)
    {
        while (arr[i] < pivotElm)
        {
            i++;
        }
        while (arr[j] > pivotElm)
        {
            j--;
        }
        if (arr[i] > pivotElm && arr[j] < pivotElm)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void Sort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = RightPlace(arr, s, e);
    Sort(arr, s, mid-1);
    Sort(arr, mid + 1, e);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {7, 2, 1, 8, 20, 6, 3, 5, 4};
    for (auto v : arr)
    {
        cout << v << " ";
    }
    cout << "\n";
    int s = 0;
    int e = arr.size() - 1;
    Sort(arr, s, e);
    for (auto v : arr)
    {
        cout << v << " ";
    }

    return 0;
}
