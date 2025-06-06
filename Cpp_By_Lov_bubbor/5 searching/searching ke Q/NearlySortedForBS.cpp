#include <iostream>
#include <vector>
using namespace std;
int nearlySorted(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (mid + 1 <= arr.size() && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
            
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 3;
    int ans = nearlySorted(arr, target);
    cout << "index\t" << ans << "\n";
    cout << "value\t" << arr[ans] << "\n";

    return 0;
}
