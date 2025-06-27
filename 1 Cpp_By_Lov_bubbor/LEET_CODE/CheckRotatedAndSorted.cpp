#include <iostream>
#include <vector>
using namespace std;

bool checkRS(vector<int> arr, int n)
{

    int c = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            c++; 
        }
    }

    if (arr[0] < arr[n - 1])
    {
        c++;
    }

    return c <= 1;

    // int c = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > arr[(i + 1) % n])
    //     {
    //         c++;
    //     }
    // }

    // return c <= 1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 1, 1, 1};
    cout << checkRS(arr, arr.size());
    return 0;
}
