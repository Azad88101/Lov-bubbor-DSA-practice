#include <iostream>
#include <vector>
using namespace std;

int usingRec2(vector<int> &arr, int &key, int s, int e)
{

    // base case
    // case key not found
    if (s > e)
        return -1;
    int mid = (s + e) / 2;
    // case 2-> key foundkey)

    if (arr[mid] == key)
    {
        return mid;
    }

    if (arr[mid] < key)
    {
        return usingRec2(arr, key, mid + 1, e);
    }
    else
    {
        return usingRec2(arr, key, s, mid - 1);
    }

  
}

int usingRec(vector<int> &arr, int &target, int &s, int &e, int &mid)
{
    mid = s + (e - s) / 2;
    if (s > e)
    {
        return -1;
    }

    else if (arr[mid] == target)
    {
        return mid;
    }
    // / // // ////   develpoed by me
    else if (arr[mid] < target)
    {
        s = mid + 1;
    }
    else if (arr[mid] > target)
    {
        e = mid - 1;
    }

    return usingRec(arr, target, s, e, mid);

    // 2nd appproach

    // if (arr[mid]>target)
    // {
    //     return usingRec(arr,target,s,mid-1);
    // }
}

int main(int argc, char const *argv[])
{

    vector<int> arr = {
        0,
        10,
        20,
        30,
        40,
        50,
        60,
        70,
        80,
        90,
    };
    int target = 90;

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    // cout << usingRec(arr, target, s, e, mid);
    cout << usingRec2(arr, target, s, e);



// normal
    // while (s <= e)
    // {
    //     int mid = s + (e - s) / 2;

    //     if (arr[mid] == target)
    //     {
    //         cout << "mil gya is index pr  " << mid << endl;
    //         break; // Exit the loop once the target is found
    //     }
    //     else if (arr[mid] < target)
    //     {
    //         s = mid + 1;
    //     }
    //     else
    //     {
    //         e = mid - 1;
    //     }
    // }

    return 0;
}
