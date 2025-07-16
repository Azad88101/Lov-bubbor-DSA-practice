#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1};
    int i = 0;
    int j = 0;
    while (i < arr.size() && j < arr.size())

    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[j]);
            // i++, 
            j++;
        }
        // else if (arr[i] == 1)
        // {
        //     i++;
        // }
        i++;
    }
    for (auto &v : arr)
    {
        cout << v << " ";
    }
    return 0;
}
