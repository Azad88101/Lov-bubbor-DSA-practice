#include <iostream>
#include <vector>
using namespace std;

void InsertionSort1(vector<int> &arr)
{
    int i = 1;
    while (i < arr.size())
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
    return;
}

void InsertionSort(vector<int> &arr)
{
    int i = 1;
    while (i < arr.size())
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;

        // 👇 Print after each pass
        cout << "After inserting " << temp << ": ";
        for (auto v : arr)
            cout << v << " ";
        cout << "\n";

        i++;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 1, 4, 2, 5, 9, 5};

    for (auto v : arr)
    {
        cout << v << " ";
    }

    cout <<  " \n";
    InsertionSort(arr);

    return 0;
}
