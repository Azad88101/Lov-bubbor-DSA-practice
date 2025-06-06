#include <iostream>
#include <vector>
using namespace std;

void removeDuplicates(vector<int> &arr)
{
    int i = 0, j = 1;
    while (j < arr.size())
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 7, 7, 8, 9};
    removeDuplicates(arr);

    for(auto a:arr){
        cout<<a<<' ';
    }
    return 0;
}
