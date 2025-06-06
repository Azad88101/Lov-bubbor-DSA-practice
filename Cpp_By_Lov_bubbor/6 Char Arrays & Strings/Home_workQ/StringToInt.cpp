#include <iostream>
#include <string>
#include <climits>
using namespace std;

int strintToInt(string s)
{
    int i = 0, num = 0, sign = 1;
    while (s[i] == ' ')
    {
        i++;
    }
    if (i < s.length() && s[i] == '-' || s[i] == '+')
    {
        sign = s[i] == '-' ? -1 : 1;
        ++i;
    }

    while (i < s.length() && isdigit(s[i]))
    {

        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7'))
        {
            // return INT_MAX;
            return sign == -1 ? INT_MIN : INT_MAX;
        }
        num = num * 10 + (s[i] - '0');
        ++i;
    }

    return num * sign;
}

int main(int argc, char const *argv[])
{

    string s = "  123+456";
    int ans = strintToInt(s);
    cout << ans;
    return 0;
}
