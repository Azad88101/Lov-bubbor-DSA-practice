#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondHigh(vector<int> arr)
{

    int max = -1;
    int secondH = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            secondH = max;
            max = arr[i];
        }
        if (arr[i] < max && arr[i] > secondH)
        {
            secondH = arr[i];
        }
    }
    return secondH;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 10, 10};

    cout << secondHigh(arr);

    return 0;
}

// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output : 34 Explanation : The largest element of the array is 35 and the second largest element is 34.

//                           Input : arr[] = [ 10, 5, 10 ] Output : 5 Explanation : The largest element of the array is 10 and the second largest element is 5.

//                                                                                  Input : arr[] = [ 10, 10, 10 ] Output : -1 Explanation : The largest element of the array is 10 there is no second largest element.