#include <iostream>
#include <vector>
using namespace std;
int findElem(vector<int> arr, int k)
{

    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }

        else if (arr[mid] < arr[0] && arr[mid] < k)
        {
            s = mid + 1;
        }
        else if (arr[mid] < arr[0] && arr[mid] > k)
        {
            e = mid - 1;
        }

        else if (arr[mid] > arr[0] && arr[mid] < k)
        {
            s = mid + 1;
        }
        else if (arr[mid] > arr[0] && arr[mid] > k)
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int k = 9;
    vector<int> arr = {5, 6, 7, 8, 9, 10, 0, 2, 3};

    cout << findElem(arr, k)+1;
    return 0;
}
