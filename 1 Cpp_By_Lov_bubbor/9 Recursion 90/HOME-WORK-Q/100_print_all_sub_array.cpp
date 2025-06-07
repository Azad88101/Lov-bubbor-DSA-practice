#include <iostream>
#include <vector>
using namespace std;

void printsubArr(vector<int> &arr, int s, int e)
{
    if (e >= arr.size())
    {
        return;
    }
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';


    printsubArr(arr, s, e + 1);
}

void hanldeS(vector<int> &arr)
{
    for (int s = 0; s < arr.size(); s++)
    {
        int e = s;
        printsubArr(arr, s, e);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    // printarr(arr, 0, 0);
    hanldeS(arr);

    return 0;
}
