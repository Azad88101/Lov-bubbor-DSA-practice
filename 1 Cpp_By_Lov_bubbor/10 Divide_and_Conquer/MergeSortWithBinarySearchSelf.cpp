#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &arr, int s, int e)
{
    int mid = (s + e) / 2;

    vector<int> leftPart;
    for (int i = s; i <= mid; i++)
    {
        leftPart.push_back(arr[i]);
    }

    // for (auto v : leftPart)
    // {
    //     cout << v << " ";
    // }
    // cout << "\n ";

    vector<int> RightPart;
    for (int i = mid + 1; i <= e; i++)
    {
        RightPart.push_back(arr[i]);
    }

    int i = 0, j = 0;
    int mainIndex = s;

    while (i < leftPart.size() && j < RightPart.size())
    {
        if (leftPart[i] < RightPart[j])
        {
            arr[mainIndex++] = leftPart[i++];
        }
        else
        {

            arr[mainIndex++] = RightPart[j++];
        }
    }

    while (i < leftPart.size())
    {

        arr[mainIndex++] = leftPart[i++];
    }

    while (j < RightPart.size())
    {

        arr[mainIndex++] = RightPart[j++];
    }
    return;
}
void SortMerge(vector<int> &arr, int s, int e)
{

    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    SortMerge(arr, s, mid);
    SortMerge(arr, mid + 1, e);

    Merge(arr, s, e);
}

int BinarySearchRec(vector<int> arr, int s, int e, int target)
{
    if (s > e)
    {
        return -1;
        /* code */
    }
    int mid = (s + e) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] > target)
    {
        e = mid - 1;
    }
    else
    {
        s = mid + 1;
    }
    return BinarySearchRec(arr, s, e, target);
}

int searchNum(vector<int> &arr, int s, int e, int target)
{

    SortMerge(arr, s, e);
    int mid = (s + e) / 2;
    return BinarySearchRec(arr, s, e, target);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {3, 4, 3, 2, 1, 4, 5, 7, 8, 96, 5, 4};

    int s = 0, e = arr.size() - 1;
    // cout << " \n";

    int idx = searchNum(arr, s, e, 96);

    cout << idx;
    return 0;
}
// // #include <iostream>
// #include <vector>
// using namespace std;

// // Function to merge two sorted halves
// vector<int> mergeParts(const vector<int>& left, const vector<int>& right) {
//     vector<int> merged;
//     int i = 0, j = 0;

//     while (i < left.size() && j < right.size()) {
//         if (left[i] < right[j])
//             merged.push_back(left[i++]);
//         else
//             merged.push_back(right[j++]);
//     }

//     while (i < left.size())
//         merged.push_back(left[i++]);

//     while (j < right.size())
//         merged.push_back(right[j++]);

//     return merged;
// }

// // Recursive Merge Sort function returning a new sorted array
// vector<int> SortMerge(const vector<int>& arr) {
//     if (arr.size() <= 1)
//         return arr;

//     int mid = arr.size() / 2;
//     vector<int> left(arr.begin(), arr.begin() + mid);
//     vector<int> right(arr.begin() + mid, arr.end());

//     left = SortMerge(left);
//     right = SortMerge(right);

//     return mergeParts(left, right);
// }

// // Binary search on sorted array (recursive)
// int BinarySearchRec(const vector<int>& arr, int s, int e, int target) {
//     if (s > e)
//         return -1;

//     int mid = (s + e) / 2;
//     if (arr[mid] == target)
//         return mid;

//     if (arr[mid] > target)
//         return BinarySearchRec(arr, s, mid - 1, target);
//     else
//         return BinarySearchRec(arr, mid + 1, e, target);
// }

// // Function that returns index of target in new sorted array
// int searchNum(const vector<int>& arr, int target) {
//     vector<int> sortedArr = SortMerge(arr);

//     // Optional: print sorted array
//     cout << "Sorted Array: ";
//     for (int num : sortedArr)
//         cout << num << " ";
//     cout << "\n";

//     return BinarySearchRec(sortedArr, 0, sortedArr.size() - 1, target);
// }

// int main() {
//     vector<int> arr = {3, 4, 3, 2, 1, 4, 5, 7, 8, 96, 5, 4};
//     int target = 96;

//     int idx = searchNum(arr, target);

//     cout << "Index of " << target << " in sorted array: " << idx << endl;
//     return 0;
// }
