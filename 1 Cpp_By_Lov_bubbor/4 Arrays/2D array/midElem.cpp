#include <iostream>
#include <vector>
using namespace std;

void findMid(vector<int> &arr)
{
    int slow = 0;
    int fast = 0;

    while (fast < arr.size())
    {
        slow += 1;
        fast += 2;
    }

    cout << arr[slow-1];
    return;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2667, 4, 3, 45652, 83, 92,332, 653, 63, 232};
    // vector<int> arr = {1, 2667, 4, 3, 45652, 38, 92, 32, 35, 63};



    findMid(arr);
    return 0;
}
