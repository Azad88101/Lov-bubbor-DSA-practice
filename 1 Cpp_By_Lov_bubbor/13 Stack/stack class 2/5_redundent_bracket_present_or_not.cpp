#include <iostream>
#include <stack>
using namespace std;

bool redundent_Bracket_present(string &str)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            bool operator_found = false;

            while (!s.empty() && s.top() != '(')
            {
                char top = s.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                {
                    operator_found = true;
                }
                s.pop();
            }

            if (!s.empty())
                s.pop(); // pop the '('

            if (!operator_found)
            {
                return true; // redundant brackets found
            }
        }
    }

    return false; // no redundant brackets
}

int main(int argc, char const *argv[])
{

    string s = "(a+b)";

    cout << redundent_Bracket_present(s);
    return 0;
}
