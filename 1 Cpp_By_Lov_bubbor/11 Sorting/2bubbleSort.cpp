#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{

    vector<int> arr = {5, 4, 2, 321, 21312, 32, 4423, 4312, 3123, 1231, 31, 2122, 121, 1, 2, 23};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (j + 1 < arr.size() && arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (auto v : arr)
    {
        cout << v << " ";
    }
    return 0;
}
