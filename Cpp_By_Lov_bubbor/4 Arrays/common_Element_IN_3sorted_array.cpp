#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr1{1, 5, 10, 20, 30};
    vector<int> arr2{5, 13, 15, 20};
    vector<int> arr3{5, 20};

    int i = 0, j = 0, k = 0;
    int z = 0;
    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        

        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i] << " ";
            i++, j++, k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    return 0;
}
