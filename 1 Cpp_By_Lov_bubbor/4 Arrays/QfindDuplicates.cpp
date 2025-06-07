#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr{1, 3, 4, 2, 2};
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             cout << " index of duplicate value " << j << "and value " << arr[j];
    //         }
    //     }
    // }
int i=0;
while(arr[0]!=arr[arr[0]]){
swap(arr[0],arr[arr[0]]);
i++;
}
cout << arr[0];
    return 0;
}
