#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 5;
    int* p  =  &a;
    int* pp = p;
    cout<<p<<'\n';
    cout<<pp<<'\n';

    return 0;
}
