#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &arr, int s, int e, int &count)
{

    int mid = (s + e) / 2;
    vector<int> leftArr;
    for (int i = s; i <= mid; i++)
    {
        leftArr.push_back(arr[i]);
    }

    vector<int> rightArr;
    for (int i = mid + 1; i <= e; i++)
    {
        rightArr.push_back(arr[i]);
    }

    int mainIndex = s;
    int i = 0, j = 0;
    while (i < leftArr.size() && j < rightArr.size())
    {
        if (leftArr[i] < rightArr[j])
        {
            arr[mainIndex++] = leftArr[i++];
        }

        if (leftArr[i] > rightArr[j])
        {
            // if (i < j)
            // {
            //     count = count + 1;
            // }
            arr[mainIndex++] = rightArr[j++];

            count += (mid - i+1);
        }
    }
    while (i < leftArr.size())
    {
        arr[mainIndex++] = leftArr[i++];
    }

    while (j < rightArr.size())
    {
        arr[mainIndex++] = rightArr[j++];
    }

    return;
}
void MergeSort(vector<int> &arr, int s, int e, int &count)
{

    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    MergeSort(arr, s, mid, count);
    MergeSort(arr, mid + 1, e, count);

    Merge(arr, s, e, count);
}

int main(int argc, char const *argv[])
{
    // mergersort

    int count = 0;
    vector<int> arr = {7, 5, 3, 1};

    int s = 0, e = arr.size() - 1;

    MergeSort(arr, s, e, count);
    cout << count << "\n";
    for (auto v : arr)
    {
        cout << v << " ";
    }

    return 0;
}
