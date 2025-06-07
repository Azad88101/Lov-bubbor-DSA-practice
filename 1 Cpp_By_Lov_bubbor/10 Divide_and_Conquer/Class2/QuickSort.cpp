#include <iostream>
#include <vector>
using namespace std;

int Partion(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];
    int c = 0;
    // Count how many elements are less than or equal to pivot
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            c++;
    }

    int pivotidx = s + c;

    swap(arr[s], arr[pivotidx]);

    int i = s, j = e;
    while (i < pivotidx && j > pivotidx)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < pivotidx && j > pivotidx)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotidx;
}

void QuickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = Partion(arr, s, e);
    QuickSort(arr, s, p - 1); // sort left
    QuickSort(arr, p + 1, e); // sort right
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {-1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int s = 0;
    int e = arr.size() - 1;
    QuickSort(arr, s, e);

    for (auto v : arr)
    {
        cout << v << " ";
    }
    return 0;
}
