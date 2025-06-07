#include <iostream>
#include <string>
using namespace std;

int checkPalindrome(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length())
    {
        if (s[i] == s[j])
        {
            count++;
        }
        i--;
        j++;
    }
    return count;
}

int CountSubs(string s)
{

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        count += checkPalindrome(s, i, i);
        count += checkPalindrome(s, i, i+1);
    }
    return count;
}
int main(int argc, char const *argv[])
{
    string s = "abc";

    int ans = CountSubs(s);

    cout << ans;
    return 0;  
}
