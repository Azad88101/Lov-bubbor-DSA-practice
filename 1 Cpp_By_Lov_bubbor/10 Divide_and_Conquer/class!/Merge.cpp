#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &arr, int s, int e)
{
    int mid = (s + e) / 2;
    vector<int> leftArr;

    for (int i = s; i <= mid; i++)
    {
        // int tmp;
        // cin >> tmp;
        leftArr.push_back(arr[i]);
    }

    vector<int> rightArr;

    for (int i = mid + 1; i <= e; i++)
    {
        // int tmp;
        // cin >> tmp;
        rightArr.push_back(arr[i]);
    }

    int i = 0, j = 0;
    int mainIdx = s;
    while (i < leftArr.size() && j < rightArr.size())
    {

        if (leftArr[i] < rightArr[j])
        {
            arr[mainIdx++] = leftArr[i++];
        }
        else
        {
            arr[mainIdx++] = rightArr[j++];
        }
    }

    while (i < leftArr.size())
    {
        arr[mainIdx++] = leftArr[i++];
    }
    while (j < rightArr.size())
    {
        arr[mainIdx++] = rightArr[j++];
    }

    return;
}

void MergeSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    MergeSort(arr, s, mid);
    MergeSort(arr, mid + 1, e);

    Merge(arr, s, e);
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 5, 4, 2, 7, 43, 8, 9, 6, 7, 8, 6, 7, 5, 4, 3, 5, 46, 3};

    MergeSort(arr, 0, arr.size() - 1);
    for (auto v : arr)
    {
        cout << v << " ";
    }

    return 0;
}
