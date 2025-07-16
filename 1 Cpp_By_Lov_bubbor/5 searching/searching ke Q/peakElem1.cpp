#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int s = 0;
    int e = arr.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            e = mid;
        }
    }
    cout << arr[s]<<" " << s;

    return 0;
} 
