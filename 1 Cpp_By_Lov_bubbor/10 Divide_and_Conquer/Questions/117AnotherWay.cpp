#include <iostream>
#include <vector>
using namespace std;

int rightPlace(vector<int> &arr, int s, int e)
{
    int i = s - 1, j = s;
    int pivot = e;

    while (j < pivot)
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }

    i++;
    swap(arr[i], arr[pivot]);
    return i;
}
void Sort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int pos = rightPlace(arr, s, e);
    Sort(arr, s, pos - 1);
    Sort(arr, pos + 1, e);
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
