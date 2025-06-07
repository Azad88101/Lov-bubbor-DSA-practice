// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;
// int findMax(vector<int> arr, int n,int max ,int i)
// {
//     if (i>=n)
//     {
//         return n;
//     }
//     if (arr[i] >= max)
//     {
//         max = arr[i];
//     }

//     findMax(arr, n, max,i+1);

//     return max;
// }
// int main(int argc, char const *argv[])
// {
//     vector<int> arr = {1, 2, 3, 4, 6, 6, 54, 3, 24, 321,23};
//     int n = arr.size() - 1;
//     int i=0;
//     int max = INT_MIN;

//     int maxi = findMax(arr, n,max,i);
//     cout<<maxi;

//     return 0;
// }

// Error while getting max: the function findMax is not correctly returning the maximum value. It should return the max value, not the index n.
// To fix this, the return statement in the findMax function should be changed to return max instead of n.
// Here is the corrected code:

#include <iostream>
#include <vector>
#include <climits>

using namespace std;
// int findMax(vector<int> arr, int n, int max, int i)
// {
//     if (i >= n)
//     {
//         return max; // Return max instead of n
//     }
//     if (arr[i] >= max)
//     {
//         max = arr[i];
//     }

//     return findMax(arr, n, max, i + 1); // Also, return the result of the recursive call
// }
void findMax(vector<int> arr, int n, int &max, int i)
{
    if (i >= n)
    {
        return; // Return max instead of n
    }
    if (arr[i] >= max)
    {
        max = arr[i];
    }

    findMax(arr, n, max, i + 1); // Also, return the result of the recursive call
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 6, 6, 54, 3, 24, 321, 23};
    int n = arr.size() - 1;
    int i = 0;
    int max = INT_MIN;
    findMax(arr, n, max, i);
    cout << "max value is" << max;

    return 0;
}
