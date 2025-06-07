// https://leetcode.com/problems/longest-palindromic-substring/

#include <iostream>
using namespace std;

string checkPalindrome(string str, int low, int high)
{

    while (low >= 0 && high < str.length() && str[low] == str[high])
    {
        low--;
        high++;
    }
    string palindrome = str.substr(low + 1, high - low - 1);

    return palindrome;
}

string find(string s)
{

    string LPS = "";

    for (int i = 0; i < s.length(); i++)
    {
        // odd
        string odd = checkPalindrome(s, i, i);
        if (odd.length() > LPS.length())
        {
            LPS = odd;
        }

        // even
        string even = checkPalindrome(s, i - 1, i);
        if (even.length() > LPS.length())
        {
            LPS = even;
        }
    }
    return LPS;
}
int main(int argc, char const *argv[])
{

    string s = "babad";
    string ans = find(s);

    cout << ans;
    return 0;
}
