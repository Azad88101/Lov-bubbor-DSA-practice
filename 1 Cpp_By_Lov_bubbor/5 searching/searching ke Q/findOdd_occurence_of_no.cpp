#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 4, 600, 600, 7, 7, 5, 5};

    int s = 0;
    int e = arr.size() - 1;
    int n = e;
    int ans;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (s == e)
        {
            break;
        }

        if (mid + 1 <= n && mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                ans = mid;

                e = mid;
            }
        }
        else
        {

            if (mid + 1 <= n && (arr[mid] == arr[mid + 1]))
            {
                e = mid;
            }
            else
            {
                ans = mid;
                s = mid + 2;
            }
        }
    }

    cout << arr[ans] << ' ' << arr[s];

    return 0;
}
