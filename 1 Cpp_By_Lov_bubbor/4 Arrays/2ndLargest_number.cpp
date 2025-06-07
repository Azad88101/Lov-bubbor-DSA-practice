#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{

    // vector<int> arr = {12, 3, 2, 3221, 2323, 21312, 3213, 123, 213};
    vector<int> arr = {12, 12, 12, 12, 12};

    int SecMax = INT_MIN;
    int Max = 0, i = 1;
    while (i < arr.size())
    {
        if (arr[i] > arr[Max])
        {
            SecMax = arr[Max];
            Max = i;
        }
        else if (arr[i] > SecMax && arr[i] < arr[Max])
        {
            SecMax = arr[i];
        }
        i++;
    }

    if (SecMax > 0)
    {

        cout << SecMax;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
