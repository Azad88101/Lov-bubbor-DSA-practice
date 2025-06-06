#include <iostream>
#include <vector>
using namespace std;
int peakIndex(vector<int> arr)
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
            e = mid;
        }
    }
    return arr[s];
}
int main(int argc, char const *argv[])
{
    vector<int> arr{0, 10,11,16,19,8,6, 5, 2};
   int index= peakIndex(arr);
cout<<"index pf your peak elememtn in array  "<<index;
    return 0;
}
