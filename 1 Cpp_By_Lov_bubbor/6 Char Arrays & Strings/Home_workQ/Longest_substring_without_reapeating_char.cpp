#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;
/*


Given a string str, find the length of the longest substring without repeating characters.
Examples :

    Input Output Explanation ABDEFGABEF 6 For “ABDEFGABEF”,
    the longest substring are “BDEFGA” and “DEFGAB”, with length 6.

*/

int firstApp()
{
    // string str = "ABDEFGABEF";
    string str = "pwwkew";
    string copy;
    cout << str << '\n';

    sort(str.begin(), str.end());
    cout << str << '\n';
    int i = 0;
    int j = 1;
    while (j < str.length())
    {
        if (str[i] == str[j])
        {
            str[i] = '0';
            i++;
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }

    cout << str << "\n";
    int k = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '0')
        {
            k++;
        }
    }

    cout << k;
}

int secondApp(string s)
{

    // string s = "pwwkewxpw";
    int l = 0, h = 0;
    unordered_set<char> charSet;

    int maxLength = 0;
    while (h < s.length())
    {
        while (charSet.find(s[h]) != charSet.end())
        {
            charSet.erase(s[l]);
            l++;
        }

        charSet.insert(s[h]);
        maxLength = max(maxLength, h - l + 1);
        h++;
    }

    // cout << maxLength << " ";
    return maxLength;
}

int thirdSame(string s)
{

    int l = 0, h = 0;
    int maxLen = 0;

    unordered_set<char> set;
    while (h < s.length())

    {
        // 🔍 What set.find(x) does:
        // set.find(x) searches for the character x in the set.

        // If it finds x, it returns an iterator pointing to that element.

        // If it doesn’t find x, it returns set.end(), which is a special iterator that means "not found".

        while (set.find(s[h]) != set.end())
        {

            /// set .end ka matlab h not found
            set.erase(s[l]);
            l++;
        }

        set.insert(s[h]);
        maxLen = max(maxLen, h - l + 1);
        h++;
    }

    return maxLen;
}
int main(int argc, char const *argv[])
{
    string s = "pwwkewxpw";
    int ans = thirdSame(s);
    cout << ans;

    return 0;
}
