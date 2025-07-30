#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str)
{
    stack<char> s;
    int i = 0;
    while (i < str.size())
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            s.push(str[i]);
        else
        {

            if (!s.empty())
            {
                if (str[i] == ')' && s.top() == '(')
                    s.pop();
                else if (str[i] == '}' && s.top() == '{')
                    s.pop();

                else if (str[i] == ']' && s.top() == '[')
                    s.pop();

                else
                    return false;
            }
            else
                return false;
        }
        i++;
    }

    return s.empty() ? true : false;
}

int main(int argc, char const *argv[])
{

    stack<int> s;
    string str = "(){[][()]}";
    isValid(str) ? cout << "true" : cout << "fasle";

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
