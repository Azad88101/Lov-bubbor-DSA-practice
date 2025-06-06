#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
        {

            return false;
        }
        i++;
        j--;
    }
    return true;
}
string longestPalindrome(string s)
{
    string ans = "";
    for (int i = 0; i < s.length() ; i++)
    {
        for (int j = 0; j < s.length() ; j++)
        {
            if (isPalindrome(s, i, j))
            {
                string t = s.substr(i, j - i + 1);
                ans = t.size() > ans.size() ? t : ans;
            }
        }
    }

    return ans;
}
int main(int argc, char const *argv[])
{

    string s = "bab";
    string ans = longestPalindrome(s);
    cout << ans;

    return 0;
}
