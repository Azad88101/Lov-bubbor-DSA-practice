#include <iostream>
#include <vector>
using namespace std;

void swapArr(vector<int> &arr, int s, int e)
{
    while (s <= e)
    {

        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    swapArr(arr, 0, arr.size() - 1);
    swapArr(arr, 0, k - 1);
    swapArr(arr, k, arr.size() - 1);

    for (auto v : arr)

    {

        cout << v << " ";
    }

    return 0;
}
