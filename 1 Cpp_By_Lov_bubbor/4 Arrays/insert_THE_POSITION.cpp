#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &arr, int target)
{
    int i = 0;
    while (i < arr.size())
    {
        if (arr[i] < target && target <= arr[i + 1])
        {
            return i+1;
        }
        i++;
    }
    return arr.size() - 1;
}
int main(int argc, char const *argv[])
{

    vector<int> arr = {1, 3, 5, 6};
    int t = 7;
    cout << searchInsert(arr, t);

    return 0;
}
