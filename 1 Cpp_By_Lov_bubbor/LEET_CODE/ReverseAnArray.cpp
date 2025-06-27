#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 4, 2, 6, 4, 1, 7, 5, 3};
    int s = 0, e = arr.size() - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for (auto v : arr)
    {
        cout << v << " ";
    }

    return 0;
}
