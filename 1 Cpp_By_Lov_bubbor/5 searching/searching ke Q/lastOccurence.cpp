#include <iostream>
#include <vector>
using namespace std;
int lastOccurence(vector<int> arr, int key)
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
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return index;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1, 2, 3, 4, 4, 4, 4, 6, 7, 9};
    int key = 4; // Assuming key is 4 for demonstration

    // Assuming lastOccurence is a function defined elsewhere in the program
    int index = lastOccurence(arr, key);
    if (index == -1)
    {
        cout << "not found";
    }
    else
    {
        cout << "last occurnece found at index of " << index;
    }

    return 0;
}
