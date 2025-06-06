#include <iostream>
#include <vector>
using namespace std;

bool valid(vector<int> arr, int k, int n, int mid)
{
    int sum = 0;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (arr[i] + sum > mid)
        {
            count++;
            sum = arr[i];
            if (count > k)
            {
                return false;
            }
        }
        else
        {
            sum += arr[i];
        }
    }
    return true;
}

int findMinTime(vector<int> arr, int k)
{
    int n = arr.size(); // no of boards

    if (k > n)
    {
        return -1;
    }

    int s = 0;
    int e = 0;
    for (auto v : arr)
    {
        e += v;
    }
    int mid = 0;
    int ans = -1;
    while (s <= e)
    { 
        mid = s + (e - s) / 2;
        if (valid(arr, k, n, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{371, 114, 929, 644, 430, 352, 565, 120, 208, 882, 238, 575, 169, 120, 582, 402, 419, 546, 589, 962, 903, 322, 276, 333, 784, 467, 679, 9, 534, 899, 156, 430, 449, 369, 647, 136, 728, 715, 41, 747, 65, 66, 995, 60, 889, 661, 781, 443, 371, 433, 293, 949, 215, 648, 255, 160, 400, 51, 474, 760, 431, 567, 284, 625, 51, 770, 856, 764, 246, 27, 267, 105, 170, 378, 369, 487, 166, 203, 916, 560, 957, 983, 555, 48, 717, 650, 49, 577, 923, 424, 411, 49, 466, 567, 378, 933, 47, 886, 987, 129, 887, 848, 501, 201, 126, 106, 364};
    int k = 80; // / no of painters

    int ans = findMinTime(arr, k);
    cout<<ans;
    return 0;
}
