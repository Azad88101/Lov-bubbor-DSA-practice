#include <iostream>
#include <cmath>
using namespace std;
int BinaryTODecimal(int n)
{
    int dec = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        dec = dec+bit * pow(2, i++);
        n /=10;
    }
    return dec;
}
int main(int argc, const char **argv)
{
    int n;
    cin >> n;
    cout << BinaryTODecimal(n);
    return 0;
}