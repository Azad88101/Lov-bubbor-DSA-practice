#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            cout << i + 1;
            if (i == j)
            {
            }
            else
            {
                cout << "*";
            }
        }

        cout << "\n";
    }

    // uska reverse
    // 1
    // 22
    // 333
    // 4444

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << n - i;
            if (i != n- k-1) // yah hmne n-k-1 isliye liya h kyunki jo k h wo sirf n-i tak ja rha h iska matlab k last me n-i par hoga wahi hhmara last hoga.
            {
                cout << "*";

            }
            else
            {
                // cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}
