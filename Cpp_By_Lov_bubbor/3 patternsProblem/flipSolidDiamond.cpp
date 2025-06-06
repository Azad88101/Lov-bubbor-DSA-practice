#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int spacebtw = 0; spacebtw < 2 * i + 1; spacebtw++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int spacebtwmidd = 0; spacebtwmidd < 2 * n - 2 * i - 1; spacebtwmidd++)
        {
            cout << " ";
        }
        for (int mid2nd = 0; mid2nd < i + 1; mid2nd++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}