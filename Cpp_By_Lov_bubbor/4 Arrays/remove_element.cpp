#include <iostream>

#include <algorithm>
#include <vector>
using namespace std;

int removeElement(vector<int> &arr, int val)
{
    int i = 0;
    int k = 1;
    int j = arr.size() - 1;
    sort(arr.begin(), arr.end());
    while (k != j)
    {

        if (arr[k] == val && arr[j] != val)
        {
            arr[k] = arr[j];
            k++;
            j--;
        }
        else if (arr[k] != val)
        {
            k++;
        }

        else if (arr[k] == arr[j])
        {
            return k;
        }
    }

    return k + 1;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    cout << removeElement(arr, val);

    return 0;
}
