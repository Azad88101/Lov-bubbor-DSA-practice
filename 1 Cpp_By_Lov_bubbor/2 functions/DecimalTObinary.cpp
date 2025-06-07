#include <iostream>
#include <cmath>
using namespace std;
int DecimalToBinary(int n)
{
    int binary = 0;
    int i = 0;
    while (n > 0)
    {
        int bin = n % 2;
        binary = bin * pow(10, i++) + binary;
        //  cout<<bin;
        n = n / 2;
    }
    return binary;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int binary = DecimalToBinary(n);
    cout << binary;

    return 0;
}
