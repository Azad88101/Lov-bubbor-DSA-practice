#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 5;
    // cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int space = 0; space < n - i; space++)
        {
            cout << " ";
        }
        for (int no = 0; no < i + 1; no++)
        {
            cout << i + 1 + no;
        }

        for (int rev = i*2; rev>i; rev--)
        {
            cout <<rev;
        }

        cout << "\n";
    }

    return 0;
}
