#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << "  ";
        }
        for (int star = 0; star < i + 1; star++)
        {
            cout << " *  ";
        }
        cout << "\n";
    }

    return 0;
}
