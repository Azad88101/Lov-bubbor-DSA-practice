#include <iostream>
#include <vector>
using namespace std;

int rightPlaced(vector<int> &arr, int s, int e)
{
    int pivotElm = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElm)
        {
            count++;
        }
    }

    int pivotIdx = s + count;
    swap(arr[pivotIdx], arr[s]);

    int i = s, j = e;
    // for (; i < pivotIdx && j > pivotIdx; i++, j--)
    // {
    //     if(arr[i]<arr[j]){
    //         swap(arr[i],arr[j]);
    //     }

    // }

    while (i < pivotIdx && j > pivotIdx)
    {
        while (arr[i] <= pivotElm)
        {
            i++;
        }
        while (arr[j] > pivotElm)
        {
            j--;
        }

        if (i < pivotIdx && j > pivotIdx)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

void QuickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int pos = rightPlaced(arr, s, e);
    QuickSort(arr, s, pos - 1); /// left call
    QuickSort(arr, pos + 1, e); // regith call
}

int main(int argc, char const *argv[])
{

    vector<int> arr = {4, 32, 3, 56, 6, 4, 0, 5, 3, 8, 5, 6, 4, 4, 5, 6, 576, 8767, 5, 64, 6, 4, 546};
    int s = 0;
    int e = arr.size() - 1;
    QuickSort(arr, s, e);

    for (auto v : arr)
    {
        cout << v << " ";
    }
    return 0;
}
