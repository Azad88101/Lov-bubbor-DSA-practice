#include <iostream>
#include <vector>
using namespace std;

int RightPlace(vector<int> &arr, int s, int e)
{
    int p = s;
    int c = 0;
    for (int i = s + 1; i <= e; i++)
        if (arr[i] <= arr[p])
            c++;

    swap(arr[p], arr[s + c]);

    p = s + c;

    int i = s, j = e;
    while (i < p && j > p)
    {
        while (arr[i] <= arr[p])
            i++;
        while (arr[j] > arr[p])
            j--;

        if (i < p && j > p)
            swap(arr[i++], arr[j--]);
    }
    return p;
}

void QuickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;
    int p = RightPlace(arr, s, e);

    QuickSort(arr, s, p - 1);
    QuickSort(arr, p + 1, e);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 12, 3, 21, 31, 0, 31, 23, 1, 23, 12, 3, 123, 12};

    cout << "Original array:\n";
    for (auto v : arr)
        cout << v << " ";
    cout << "\n";

    QuickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array:\n";
    for (auto v : arr)
        cout << v << " ";
    cout << "\n";

    return 0;
}
