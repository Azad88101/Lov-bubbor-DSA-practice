#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &arr)
{
    int i = 1;
    while (i < arr.size())
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] < temp)
            {
                swap(arr[j + 1], arr[j]);
            }
            j++;
        }
        i++;
    }
    return;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 1, 4, 2, 5, 9, 5};
    SelectionSort(arr);
    for (auto v : arr)
    {
        cout << v << " ";
    }
    return 0;
}
