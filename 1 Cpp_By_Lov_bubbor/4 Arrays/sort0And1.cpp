#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr{0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0};

    int start = 0;
    int end = arr.size() - 1;
    for (int i = 0; i!=end;)
    {
        if (arr[i] == 0)
        {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
        else
        {
            swap(arr[end], arr[i]);
            end--;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    return 0;
}
