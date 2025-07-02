#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>
#include <algorithm>
using namespace std;

// void Merge(vector<int> &arr, int s, int e)
// {
//     int mid = s + (e - s) / 2;
//     vector<int> leftPart;
//     for (int i = s; i <= mid; i++)
//     {
//         leftPart.push_back(arr[i]);
//     }

//     vector<int> rightPart;
//     for (int i = mid + 1; i <= e; i++)
//     {
//         rightPart.push_back(arr[i]);
//     }

//     int mainIdx = s;

//     int i = 0, j = 0;
//     while (i < leftPart.size() && j < rightPart.size())
//     {
//         if (leftPart[i] < rightPart[j])
//         {
//             arr[mainIdx++] = leftPart[i++];
//         }
//       else
//         {
//             arr[mainIdx++] = rightPart[j++];
//         }
//     }
//     while (i < leftPart.size())
//     {
//         arr[mainIdx++] = leftPart[i++];
//     }

//     while (j < rightPart.size())
//     {
//         arr[mainIdx++] = rightPart[j++];
//     }

//     return;
// }

// void MergeSort(vector<int> &arr, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     int mid = s + (e - s) / 2;
//     MergeSort(arr, s, mid);
//     MergeSort(arr, mid + 1, e);
//     Merge(arr, s, e);
// }
// qwickkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk sorttttttttttttttttttttttttt

// int Partition(vector<int> &arr, int s, int e)
// {
//     int pivotElem = arr[s];
//     int pivotIdx = s;
//     int c = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] < pivotElem)
//         {
//             c++;
//         }
//     }
//     pivotIdx = s + c;
//     swap(arr[pivotIdx], arr[s]);
//     int i = s, j = e;
//     while (i < pivotIdx && j > pivotIdx)
//     {
//         while (arr[i] < pivotElem)
//         {
//             i++;
//         }

//         while (arr[j] > pivotElem)
//         {
//             j--;
//         }
//         if (i < pivotIdx && j > pivotIdx)
//         {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pivotIdx;
// }

// void QwickSort(vector<int> &arr, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     int pos = Partition(arr, s, e);
//     QwickSort(arr, s, pos - 1);
//     QwickSort(arr, pos + 1, e);
// }

////////////////////// qwick sort ...........  end elem pivot

void QuickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int pivot = e;
    int j = s;
    int i = j - 1;
    while (j < pivot)
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);

    QuickSort(arr, s, i - 1);
    QuickSort(arr, i + 1, e);
}

void findsum2(vector<int> &arr, int sum, int t, vector<int> &temp, vector<vector<int>> &ans, int idx)
{
    // cout << "Current sum: " << sum << ", target: " << t << ", current temp: ";
    // for (int x : temp)
    //     cout << x << " ";
    // cout << endl;

    if (sum == t)
    {
        // cout << "Target met! Adding to ans: ";
        // for (int x : temp)
        //     cout << x << " ";
        // cout << endl;
        ans.push_back(temp);
        return;
    }
    if (sum > t)
    {
        // cout << "Sum exceeded target, backtracking.\n";
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        // cout << "Choosing: " << arr[i] << endl;
        temp.push_back(arr[i]);
        // sum += arr[i];
        findsum2(arr, sum + arr[i], t, temp, ans, i + 1);
        // cout << "Backtracking: removing " << arr[i] << " from temp\n";
        // sum -= arr[i];
        temp.pop_back();
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 5, 2, 1, 2};
    vector<int> temp;
    vector<vector<int>> ans;
    int t = 5;
    QuickSort(arr, 0, arr.size() - 1);

    findsum2(arr, 0, t, temp, ans, 0);
    // cout << "Total combinations found: " << ans.size() << endl;
    set<vector<int>> st;
    for (auto e : ans)
    {
        // sort(e.begin(), e.end());
        // MergeSort(e, 0, e.size() - 1);

        // choosing 1st elem pivot
        // QwickSort(e, 0, e.size() - 1);

        /// last
        // QuickSort(e,0,e.size()-1);
        st.insert(e);
    }
    ans.clear();
    for (auto e : st)
    {
        ans.push_back(e);
    }
    for (auto v : ans)
    {
        for (auto m : v)
        {
            cout << m << " ";
        }
        cout << endl;
    }

    return 0;
}
