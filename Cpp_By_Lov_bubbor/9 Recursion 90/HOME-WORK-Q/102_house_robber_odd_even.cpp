#include <iostream>
#include <vector>
using namespace std;

int findHelp(vector<int> arr, int n)
{
    int sum = 0;
    int i = n;
    while (i < arr.size())
    {
        sum += arr[i];
        i += 2;
    }

    return sum;
}

int FindMaxProfit(vector<int> arr, int i)
{
    if (i >= arr.size())
        return 0;

    int pick = arr[i] + FindMaxProfit(arr, i + 2);
    int notPick= 0 + FindMaxProfit(arr, i + 1);

    return max(pick, notPick);
}
int main(int argc, char const *argv[])
{

    vector<int> arr = {2, 1, 1, 2};
    cout << FindMaxProfit(arr, 0);
    return 0;
}
