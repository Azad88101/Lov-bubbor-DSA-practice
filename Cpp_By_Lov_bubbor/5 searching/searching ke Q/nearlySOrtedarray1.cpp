// find element nearly sorted __ARRAY_OPERATORS

#include <iostream>
#include <vector>
using namespace std;
int elemNsorteArr(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {

            return mid;
        }
        else if (mid-1>=0&&arr[mid-1] == target)
        {
            return mid-1;
            
        }
        else if (mid+1<arr.size()&&arr[mid+1] == target)
        {
            return mid+1; 
            
        }
        else if (arr[mid]<target)
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    vector<int> arr{10,3,40,20,50,80,70};
    int target = 40;
    int index  = elemNsorteArr(arr, target);
    cout<<index;

    return 0;
}
// ye ek nearly sorted array h.

//majak se htke bas mene video me itna dekha ki matlab kya h nearly sorted ka baaki mene khud se krdiya aur sahi me bahut kushi hote jab pura logic and code khud kiya ho
// nearly sorted ka mtlab hota h ki sorted array jo index h wo nearly sorted me ya i ho skta h ya i-1 ya i+1 esi ka logic upar code me h baaki isse better approah bhi ho skti h
