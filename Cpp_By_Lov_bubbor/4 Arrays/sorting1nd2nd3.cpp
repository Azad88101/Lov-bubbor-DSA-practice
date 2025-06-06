#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr{2, 0,0,0,0, 2, 1, 1, 0, 0, 1, 1, 2, 2, 2, 2};
    vector<int> brr;
    int start = 0;
    int middle = 0;
    int end = arr.size() - 1;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int elem = arr[i];
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         if (elem > arr[j])
    //         {
    //             elem = arr[j];
    //             brr.push_back(elem);
    //         }
    //     }
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << brr[i];
    // }
    while (middle <= end)
    {
        if (arr[middle] == 0)
        {
            swap(arr[middle], arr[start]);
            start++;
            middle++;
        }
        else if (arr[middle] == 1)
        {
            middle++;
        }
        else
        {
            swap(arr[middle], arr[end]);
            end--;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    return 0;
}

// kash ye khud se kiya hota solution ke baad kra h khud se;
