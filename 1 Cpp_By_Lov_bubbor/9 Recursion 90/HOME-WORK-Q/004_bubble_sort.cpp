// #include <iostream>
// #include <vector>
// using namespace std;

// void bubbleSortRecursive(vector<int> &arr, int n)
// {
//     if (n == 1 || n == 0)
//         return;

//     bool isSwap = true;
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             isSwap = false;
//             swap(arr[i], arr[i + 1]);
//         }
//     }
//     if (isSwap)
//         return;

//     else
//         bubbleSortRecursive(arr, n - 1);
// }
// int main()
// {
//     vector<int> arr = {423232, 122, 3, 43, 12, 34, 2321, 12332321, 33, 2, 13232, 13232, 3, 123, 1231, 23};
//     bubbleSortRecursive(arr, arr.size());

//     for (auto v : arr)
//         cout << v << " ";

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int> &arr)
{
    for (auto v : arr)
        cout << v << " ";
    cout << endl;
}

void bubbleSortRecursive(vector<int> &arr, int n)
{
    // base case
    if (n == 1 || n == 0)
        return;

    bool isSwap = true;

    cout << "Pass (n = " << n << "):" << endl;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSwap = false;
            swap(arr[i], arr[i + 1]);
        }
    }

    cout << "Array after this pass: ";
    printArray(arr);

    if (isSwap)
    {
        cout << "No swaps, array is sorted!" << endl;
        return;
    }
    else
        bubbleSortRecursive(arr, n - 1);
}

int main()
{
    vector<int> arr = {423232, 122, 3, 43, 12, 34, 2321, 12332321, 33, 2, 13232, 13232, 3, 123, 1231, 23};

    cout << "Initial Array: ";
    printArray(arr);

    bubbleSortRecursive(arr, arr.size());

    cout << "\nFinal Sorted Array: ";
    printArray(arr);

    return 0;
}
