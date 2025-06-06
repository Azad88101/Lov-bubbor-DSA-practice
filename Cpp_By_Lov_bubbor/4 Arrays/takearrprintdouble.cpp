#include <iostream>
using namespace std;
int inputarrPrintD()
{
    int arr[100];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < 4; j++)
    {
        cout<<arr[j]*2<<" ";
        
    }
}
int main(int argc, char const *argv[])
{
    inputarrPrintD();


    return 0;
}
