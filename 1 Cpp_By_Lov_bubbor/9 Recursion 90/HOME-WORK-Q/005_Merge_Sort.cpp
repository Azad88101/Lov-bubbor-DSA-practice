#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &arr, int s, int e)
{

    int mid = s + (e - s) / 2;

    vector<int> left;
    vector<int> right;

    for (int i = s; i <= mid; i++)
        left.push_back(arr[i]);

    for (int i = mid + 1; i <= e; i++)
        right.push_back(arr[i]);

    int i = 0;
    int j = 0;
    int m = s;
    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
            arr[m++] = left[i++];
        else
            arr[m++] = right[j++];
    }

    while (i < left.size())
        arr[m++] = left[i++];

    while (j < right.size())
        arr[m++] = right[j++];

    return;
}

void MergeSort(vector<int> &arr, int s, int e)
{

    if (s >= e)
        return;
    int mid = s + (e - s) / 2;
    MergeSort(arr, s, mid);
    MergeSort(arr, mid + 1, e);

    Merge(arr, s, e);
}

int main()
{
    vector<int> arr = {423232, 122, 3, 43, 12, 34, 2321, 12332321};

    for (auto v : arr)
        cout << v << " ";

    cout << "\n";

    MergeSort(arr, 0, arr.size() - 1);

    for (auto v : arr)
        cout << v << " ";
    return 0;
}