#include <iostream>
#include <vector>
using namespace std;

int findSmallIdx(vector<int> &arr, int value, int i)
{
    int ans = -1;
    for (int j = i + 1; j < arr.size(); j++)
    {
        if (value > arr[j])
        {
            ans = j;
            value = arr[j];
        }
    }
    return ans;
}

void printArr(vector<int> arr)
{
    for (auto v : arr)
    {
        cout << v << " ";
    }
    cout << " \n";

    return;
}

int seSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int value = arr[i];
        int idx = findSmallIdx(arr, value, i);
        if (idx != -1)
        {

            swap(arr[i], arr[idx]);
        }
        printArr(arr);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 1, 7, 6, 14, 9};
    printArr(arr);

    seSort(arr);

    return 0;
}
