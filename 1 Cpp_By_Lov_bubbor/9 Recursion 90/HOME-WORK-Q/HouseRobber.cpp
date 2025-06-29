#include <iostream>
#include <vector>
using namespace std;

int houseRob(vector<int> arr, int i, int ans)
{
    if (i >= arr.size())
    {
        return ans;
    }

    // pick

    int pick1 = houseRob(arr, i + 2, ans + arr[i]);
    int pick2 = houseRob(arr, i + 1, ans);

    return max(pick1, pick2);
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 1};

    cout<< houseRob(arr,0,0);

    return 0;
}
