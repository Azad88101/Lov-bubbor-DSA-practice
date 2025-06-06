#include <iostream>
#include <vector>
using namespace std;
int peak(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return s;
}
int main(int argc, char const *argv[])
{
    vector<int> arr{ 1, 2, 4, 8, 9, 0};
    int index = peak(arr);
    cout << "index is " << index<<endl;
    cout << "value is " << arr[index];
    return 0;
}
