#include <iostream>
#include <vector>
using namespace std;
int findPivot(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (arr[mid] < arr[0])
        {
            e = mid - 1;
        }
        else if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
    }
    // cout<<mid<<' ';
    cout << s - 1 << ' ' << arr[s - 1];
}



int main(int argc, char const *argv[])
{
    vector<int> arr = {7, 9, 1, 2, 3};
    findPivot(arr);
    return 0;
}
