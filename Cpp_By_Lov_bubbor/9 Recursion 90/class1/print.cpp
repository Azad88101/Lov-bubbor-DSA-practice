#include <iostream>
using namespace std;
void printit(int n)
{
    if (n == 0)
    {
        return;
    }
    printit(n - 1);
    cout << n;
}
int main(int argc, char const *argv[])
{
    int n = 7;
    printit(n);
    return 0;
}
