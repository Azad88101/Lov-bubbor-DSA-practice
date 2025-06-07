#include <iostream>
#include <vector>
using namespace std;
void findMax(vector<int> &arr, int &max, int i){
    if(i>=arr.size()){
        return;

    }
    if(arr[i]>max){
        max=arr[i];
    }
    findMax(arr,max,i+1);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {98, 4324, 23, 213, 23, 13, 1, 2, 1232, 312, 9123, 213, 12, 3};
    int i = 0;
    int max = -1;
    findMax(arr, max, i);
    cout<<max;
    return 0;
}
