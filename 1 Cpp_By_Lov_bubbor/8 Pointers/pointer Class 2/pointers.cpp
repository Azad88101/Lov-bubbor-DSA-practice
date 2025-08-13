#include <iostream>
// #include <>
using namespace std;
int main(int argc, const char **argv)
{

    int arr[4] = {1212, 3432, 12873, 123};

    // // cout << arr << '\n';
    // // cout << &arr << "\n";
    // // cout << &arr[0] << '\n';
    // ////////////////     all gives same address

    // int i = 2;
    // // cout << i[arr] ;

    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     // cout<<i[arr]<<endl;
    // }

    // int* arrPtr = arr;
    // arrPtr = arrPtr+2;
    // std::cout << arr << std::endl;
    // std::cout << arrPtr << std::endl;

    char ch[10] = "azad";

    char *c = ch;
    cout << ch << endl;
    cout << ch[0] << endl;
    cout << &ch << endl;
    cout << *ch << endl;
    cout << c << endl;
    cout << *c << endl;
    cout << &c << endl;

    return 0;




    
}