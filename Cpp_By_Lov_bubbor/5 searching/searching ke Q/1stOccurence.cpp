#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(vector<int> arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int index = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            index = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            // e = mid - 1;
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return index;
}
int main(int argc, char const *argv[])
{
    vector<int> arr{1, 2, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int key = 3;
    int index = firstOccurence(arr, key);
    if (index == -1)
    {
        cout << "not found";
    }
    else
    {
        cout << index;
    }

    return 0;
}
