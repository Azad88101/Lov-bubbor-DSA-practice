#include <iostream>
#include <vector>
using namespace std;

int RightPos(vector<int>&arr, int s, int e)
{
    int pivotEl = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotEl)
        {
            count++;
        }
    }

    int rightIdx = s + count;

    swap(arr[s], arr[rightIdx]);

    int i = s, j = e;

    while (i < rightIdx && j > rightIdx)
    {
        while (arr[i] < pivotEl)
        {
            i++;
        }

        while (arr[j] > pivotEl)
        {
            j--;
        }
        if (i < rightIdx && j > rightIdx)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return rightIdx;
}
void QwickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int pos = RightPos(arr, s, e);

    QwickSort(arr, s, pos - 1);
    QwickSort(arr, pos + 1, e);
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 5, 4, 2, 7, 43, 8, 9, 6, 7, 8, 6, 7, 5, 4, 3, 5, 46, 3};

    QwickSort(arr, 0, arr.size() - 1);
    for (auto v : arr)
    {
        cout << v << " ";
    }
    return 0;
}
