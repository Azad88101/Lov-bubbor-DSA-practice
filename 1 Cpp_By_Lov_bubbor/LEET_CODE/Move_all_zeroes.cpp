#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{

    vector<int> arr = {0, 0, 2, 0, 3, 0, 4, 0};
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == 0 && arr[j] != 0)
            {
                swap(arr[i], arr[j]);
                break; // Break to avoid multiple swaps for the same zero
            }
        }
    }
    for (auto v : arr)
    {
        cout << v << " ";
    }
    return 0;
}
