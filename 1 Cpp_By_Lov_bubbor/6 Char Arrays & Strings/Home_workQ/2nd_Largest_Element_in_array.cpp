#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    // vector<int> arr = {1, 2, 3};
    // vector<int> arr = {1, 1, 1, 1, 1};

    int i = 1, l = arr[0], sl = INT_MIN;

    while (i < arr.size())
    {

        if (arr[i] > l)
        {
            sl = l;
            l = arr[i];
        }
        else if (arr[i] < l && arr[i] > sl)
        {
            sl = arr[i];
        }
        i++;
    }

    if (sl > 0)
    {
        cout << sl;
    }
    else
    {
        cout << -1;
    }

    // failedddddddddddddddddddddddddddddddddddddddddddddddddddd

    // // vector<int> arr = {12, 35, 1, 10, 34, 1};
    // vector<int> arr = {1, 2, 3};
    // // vector<int> arr = {1, 1, 1, 1, 1};

    // code faileddddddddddddddddddddddddddddddddddddddddddddddddddd
    // int i = 1, L = 0, SL = INT_MIN;
    // int temp = 0;
    // while (i < arr.size())
    // {
    //     if (arr[i] > arr[L])
    //     {
    //         temp = L;
    //         L = i;
    //     }
    //     if (arr[temp] > arr[SL])
    //     {
    //         SL = temp;
    //     }
    //    else if (arr[i] > arr[SL])
    //     {
    //         SL = i;
    //     }
    //     i++;
    // }
    // if (SL > 0)
    // {
    //     cout << SL;
    // }
    // else
    // {
    //     cout << -1;
    // }

    // int num;
    // cout << "enter the size of the array";
    // cin >> num;

    // int n;
    // for (int i = 0; i < num; i++)
    // {
    //     cin >> n;
    //     arr.push_back(n);
    // }

    // method 1111111111111111111
    // while (cin>>num)
    // {
    //     arr.push_back(num);
    // }

    // method 32222    2   @@@@@@@@@@@@@ @addindex 2       222222    22222222222
    // Write the solution that takes an array of integers and returns the second largest element in the array. If there is no second largest element, return -1.

    // for (auto var : arr)
    // {
    //     cout << var << " ";
    // }

    return 0;
}
