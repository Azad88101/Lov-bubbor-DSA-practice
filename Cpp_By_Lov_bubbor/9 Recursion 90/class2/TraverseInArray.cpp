#include <iostream>
#include <vector>
using namespace std;
void printArr(vector<int> arr, int n, int i)
{
    if (i >= n)
        return;
    cout << arr[i] << ' ';

    printArr(arr, n, i + 1);
    return;
}

int main(int argc, char const *argv[])
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int i = 0;
    int n = arr.size();
    printArr(arr, n, i);
    return 0;
}
