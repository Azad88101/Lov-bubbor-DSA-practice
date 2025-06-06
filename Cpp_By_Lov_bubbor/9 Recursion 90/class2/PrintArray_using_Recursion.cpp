#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr, int n)
{
    if (n < 0)
    {
        return;
    }
    printArr(arr, n - 1);
    cout << arr[n] << " ";
}

int main(int argc, char const *argv[])
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size() - 1;

    printArr(arr, n);

    return 0;
}
