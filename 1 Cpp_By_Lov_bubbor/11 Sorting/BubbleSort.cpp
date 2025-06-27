#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> &arr)
{
    for (auto v : arr)
    {
        cout << v << " ";
    }
    cout << " \n";
}
void bubbleSort(vector<int> &arr)
{
    int n = arr.size() - 1;
    for (int i = 0; i <= n; i++)
    {

        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (j + 1 < arr.size() && arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                printArr(arr);
            }
        }

        if (!swapped)
        {
            // ✅ No swaps in this pass, so the array is already sorted
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 1, 7, 6, 14, 9};
    printArr(arr);

    bubbleSort(arr);

    return 0;
}
