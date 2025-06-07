#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr, int i)
{
    if (i == arr.size()-1)
    {
        return true;
    }
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    return isSorted(arr, i + 1);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i = 0;
    cout << isSorted(arr, i);

    return 0;
}
