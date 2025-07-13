#include <iostream>
#include <vector>
using namespace std;

void Merging(vector<int> &arr, int s, int e)
{

    int mid = (s + e) / 2;
    vector<int> left;

    for (int i = s; i <= mid; i++)
    {
        // int temp;
        // cin>>temp;
        left.push_back(arr[i]);
    }

    vector<int> right;

    for (int i = mid + 1; i <= e; i++)
    {
        // int temp;
        // cin>>temp;
        right.push_back(arr[i]);
    }

    int i = 0, j = 0;

    int mainIdx = s;

    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
        {
            arr[mainIdx++] = left[i++];
        }
        else
        {
            arr[mainIdx++] = right[j++];
        }
    }

    while (i < left.size())
    {
        arr[mainIdx++] = left[i++];
    }

    while (j < right.size())
    {
        arr[mainIdx++] = right[j++];
    }
    return;
}

void MergeSort(vector<int> &arr, int s, int e)
{

    if (s >= e)
        return;
    int mid = (s + e) / 2;
    // cout<<mid<<' ';

    MergeSort(arr, s, mid);
    MergeSort(arr, mid + 1, e);

    // Merging

    Merging(arr, s, e);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {8, 1, 7, 2, 9, 4, 1, 8, 4, 9, 0, 9};

    MergeSort(arr, 0, arr.size() - 1);

    for (auto v : arr)
    {
        cout << v << " ";
    }

    return 0;
}
