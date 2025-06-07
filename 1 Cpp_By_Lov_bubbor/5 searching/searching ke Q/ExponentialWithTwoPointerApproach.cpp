#include <iostream>

////////////////////////                                                                                                                                                           /////    Exponential serach using two pointer approach                       ///////////////

#include <vector>
using namespace std;
int byse(int s, int e, vector<int> arr, int t)
{
    int mid = 0;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == t)
        {
            return mid;
        }
        else if (arr[mid] > t)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int exArea(vector<int> arr, int t)
{
    int i = 0;
    int j = 1;
    int n = arr.size();
    if (arr[i] == t)
    {
        return 0;
    }
    while (j < n && arr[j] <= t)
    {
        i = j;
        j = j * 2;
    }

    return byse(i, j, arr, t);
}

int main(int argc, const char **argv)
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99, 1111, 2222, 3333, 4444, 5555, 6666, 7777, 11111, 23423, 54243, 65354};
    int t = 23423;
    int ans = exArea(arr, t);
    if (ans >= 0)
    {
        cout << "index iss    " << ans << "     value is     " << arr[ans];
    }
    else
    {
        cout << "elem not found";
    }

    return 0;
}
