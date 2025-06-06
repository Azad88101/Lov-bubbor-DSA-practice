#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr{0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0};
    int s = 0;
    int e = arr.size() - 1;
    int i = 0;
    
    while (s<e)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[s]);
            i++;
            s++;
        }
        else if (arr[i] == 1)
        {
            swap(arr[i], arr[e]);
            e--;
        }
        else
        {
            i++;
        }
    }

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}
