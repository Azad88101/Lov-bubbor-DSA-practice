#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

int main()
{
    vector<int> arr = {
        2,
        32,
        33232,
        323,
        3232,
        3,
        231,
        74352,
        6234315,
        4,
        523243,
        21,
        245,
        43,
        6457658,
        56,
        45,
        62,
        425,
    };

    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] < firstMax)
        {
            secondMax = arr[i];
        }
    }

    cout << "Max: " << firstMax << "\n";
    if (secondMax != INT_MIN)
        cout << "Second Max: " << secondMax << "\n";
    else
        cout << "No distinct second maximum found.\n";

    return 0;
}
