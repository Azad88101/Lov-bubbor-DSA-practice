#include <iostream>
#include <vector>
using namespace std;
int firstOcurence(vector<int> arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int index = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            index = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return index;
}
int lastOcurence(vector<int> arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int lastIndex = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            lastIndex = mid;
            s = mid + 1;
        }
        if (arr[mid] > key)
        {

            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return lastIndex;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1, 2, 3, 4, 4, 4, 4, 4, 5, 6};
    int key=3;
    int first = firstOcurence(arr, key);
    int last = lastOcurence(arr, key);
    if (first == -1 || last == -1)
    {
        cout << "not Found";
    }
    else
    {
        // cout<<first;
        // cout<<last;
        cout << "your target value total occurence " << (last - first)+1;
    }

    return 0;
}
