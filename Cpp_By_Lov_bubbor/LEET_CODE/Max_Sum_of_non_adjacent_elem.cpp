#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void findMaxSum(vector<int> &arr, int i, int sum, int &maxi)
{

    if (i > arr.size())
    {
        maxi = max(maxi, sum);

        return;
    }

    findMaxSum(arr, i + 2, sum + arr[i], maxi);

    findMaxSum(arr, i + 1, sum, maxi);
    if (sum >= maxi)
    {
        maxi = sum;
    }
    return;
}
int main(int argc, char const *argv[])
{

    vector<int> arr = {2, 1, 4, 9};
    int maxi = INT_MIN;
    findMaxSum(arr, 0, 0, maxi);
    cout<<maxi;

    return 0;
}
