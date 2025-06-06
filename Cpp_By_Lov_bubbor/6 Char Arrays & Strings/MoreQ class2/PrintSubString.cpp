#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "noon"; // Example string
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            // Print characters from index i to j
            for (int k = i; k <= j; k++)
            {
                cout << s[k];
            }
            cout << '\n';
        }
    }
    return 0;
}
