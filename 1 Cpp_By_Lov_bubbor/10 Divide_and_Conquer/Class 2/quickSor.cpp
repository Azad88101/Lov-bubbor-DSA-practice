#include <iostream>
#include <vector>
using namespace std;

int Partition(int s, int e, vector<int> &arr, vector<vector<int>> &ans)
{

    int pivotEl = arr[s];
    int c = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivotEl)
        {
            c++;
        }
    }

    int pivotIdx = s + c;

    ans.push_back({pivotEl, arr[pivotIdx]});
    swap(arr[s], arr[pivotIdx]);

    int i = s, j = e;
    while (i < pivotIdx && j > pivotIdx)
    {
        while (arr[i] < pivotEl)
        {
            i++;
        }

        while (arr[j] > pivotEl)
        {
            j--;
        }

        if (i < pivotIdx && j > pivotIdx && arr[i] > pivotEl && arr[j] < pivotEl)
        {
            swap(arr[i], arr[j]);
            i++, j--;
        }
    }

    return pivotIdx;
}

void QuickSort(int s, int e, vector<int> &arr, vector<vector<int>> &ans)
{
    if (s >= e)
    {
        return;
    }
    int p = Partition(s, e, arr, ans);
    QuickSort(s, p - 1, arr, ans);
    QuickSort(p + 1, e, arr, ans);
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 4, 1};

    int s = 0;
    int e = arr.size() - 1;

    vector<vector<int>> ans;

    QuickSort(s, e, arr, ans);

    for (int i = 0; i < ans.size(); i++)

    {

        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
