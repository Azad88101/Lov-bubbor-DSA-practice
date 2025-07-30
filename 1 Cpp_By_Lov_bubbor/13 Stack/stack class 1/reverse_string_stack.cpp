#include <stack>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "azad";

    stack<char> rev;
    for (int i = 0; i < s.size(); i++)
    {

        rev.push(s[i]);
    }

    while (!rev.empty())
    {
        cout << rev.top();
        rev.pop();
    }
    return 0;
}
