#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c)
{
    // c = tolower(c);

    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
string reverseVowels(string s)
{

    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (isVowel(s[i]) && isVowel(s[j]))
        {
            swap(s[i], s[j]);
            i++, j--;
        }
        else if (!isVowel(s[i]))
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return s;
}
int main(int argc, char const *argv[])
{
    string s = "IceCreAm";
    string ans = reverseVowels(s);

    cout << ans;
    return 0;
}
