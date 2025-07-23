#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 5;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < n - 1 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " * ";
    //     }

    //     cout << "\n";
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}
