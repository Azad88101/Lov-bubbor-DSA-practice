#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void findMaxSum(vector<int> &arr, int i, int sum, int &maxi)
{

    if (i >= arr.size())
    {
        maxi = max(maxi, sum);
        return;
    }

    // i=0;  even ke liye
    // i = 0;

    findMaxSum(arr, i + 2, sum + arr[i], maxi);
    // sum += arr[i];
    // maxi = max(maxi, sum);
    findMaxSum(arr, i + 1, sum, maxi);
    // i=1 odd keliye
    // i = 1;
    // sum = 0;
    // findMaxSum(arr, i + 2, sum, maxi);
    // sum += arr[i];
    // maxi = max(maxi, sum);

    // findMaxSum(arr, i + 2, sum, maxi);
    return;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 1, 4, 9};
    int i = 0;
    int sum = 0;
    int maxi = INT_MIN;
    findMaxSum(arr, i, sum, maxi);
    cout << maxi;

    return 0;
}
