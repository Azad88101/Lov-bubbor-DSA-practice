#include <iostream>
#include <algorithm>
using namespace std;

bool customComperator(char first, char second)
{
    return first > second;
}
int main(int argc, char const *argv[])
{
    string s = "azad";
    sort(s.begin(), s.end(), customComperator);
    cout << s;

    return 0;
}
