#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{

    int mid = (s + e) / 2;

    vector<int> leftArr;
    for (int i = s; i <= mid; i++)

    {

        leftArr.push_back(arr[i]);
    }

    vector<int> rightArr;
    for (int i = mid + 1; i <= e; i++)

    {

        rightArr.push_back(arr[i]);
    }

    int i=0, j = 0;
    int mainIndex = s;

    while (i < leftArr.size() && j < rightArr.size())
    {
        if (leftArr[i] < rightArr[j])
        {
            arr[mainIndex++] = leftArr[i++];
        }
        else
        {
            arr[mainIndex++] = rightArr[j++];
        }
    }

    while (i < leftArr.size())
    {
        arr[mainIndex++] = leftArr[i++];
    }

    while (j < rightArr.size())
    {
        arr[mainIndex++] = rightArr[j++];
    }

    // marge ka loogic
    return;
}

void mergeSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {4, 3, 2, 5, 50, 2, 1, 4, 5, 7};
    int s = 0;
    int e = arr.size() - 1;
    mergeSort(arr, s, e);

    for (auto v : arr)
    {
        cout << v << " ";
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(vector<int> &arr, int s, int e)
// {
//     int mid = (s + e) / 2;

//     vector<int> leftArr;
//     for (int i = s; i <= mid; i++)
//     {
//         leftArr.push_back(arr[i]);
//     }

//     vector<int> rightArr;
//     for (int i = mid + 1; i <= e; i++)
//     {
//         rightArr.push_back(arr[i]);
//     }

//     int i = 0, j = 0;
//     int mainIndex = s;

//     while (i < leftArr.size() && j < rightArr.size())
//     {
//         if (leftArr[i] < rightArr[j])
//         {
//             arr[mainIndex++] = leftArr[i++];
//         }
//         else
//         {
//             arr[mainIndex++] = rightArr[j++];
//         }
//     }

//     while (i < leftArr.size())
//     {
//         arr[mainIndex++] = leftArr[i++];
//     }

//     while (j < rightArr.size())
//     {
//         arr[mainIndex++] = rightArr[j++];
//     }
// }

// void mergeSort(vector<int> &arr, int s, int e)
// {
//     if (s >= e) // Correct base case
//     {
//         return;
//     }

//     int mid = (s + e) / 2;
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid + 1, e);
//     merge(arr, s, e);
// }

// int main()
// {
//     vector<int> arr = {4, 3, 2, 5, 50, 2, 1, 4, 5, 7};
//     int s = 0;
//     int e = arr.size() - 1;

//     mergeSort(arr, s, e);

//     for (auto v : arr)
//     {
//         cout << v << " ";
//     }

//     return 0;
// }
