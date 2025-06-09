#include <iostream>
#include <vector>
using namespace std;

int MakeRightPos(vector<int> &arr, int s, int e)
{
    int PivotElm = arr[s];
    int c = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= PivotElm)
        {
            c++;
        }
    }

    int RightPos = s + c;
    swap(arr[s], arr[RightPos]);
    int i = s, j = e;
    while (i < RightPos && j > RightPos)
    {
        while (arr[i] < PivotElm)
        {
            i++;
        }
        while (arr[j] > PivotElm)
        {
            j--;
        }
        if (i < RightPos && j > RightPos)
        {
            swap(arr[i], arr[j]);
            i++, j--;
        }
    }
    return RightPos;
}
void QwickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int pos = MakeRightPos(arr, s, e);

    QwickSort(arr, s, pos - 1);
    QwickSort(arr, pos + 1, e);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {4, 395, 38, 465, 6, 8, 5, 43, 9, 0, 4, 5, 8, 3, 6};

    QwickSort(arr, 0, arr.size() - 1);
    for (auto v : arr)
    {
        cout << v << " ";
    }
    return 0;
}
