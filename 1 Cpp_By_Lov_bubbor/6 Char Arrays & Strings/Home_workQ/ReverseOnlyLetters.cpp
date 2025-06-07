// #include <iostream>
// #include <string>
// using namespace std;

// string ReverseOnlyLetters(string k)
// {
//     string s = k;

//     int i = 0;
//     int j = s.length() - 1;
//     while (i <= j)
//     {
//         if ((s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') &&
//         (s[j] >= 'a' && s[j] <= 'z' || s[j] >= 'A' && s[j] <= 'Z'))
//         {
//             swap(s[i], s[j]);
//             i++;
//             j--;
//         }
//         // else if (i < 'a' || 'A' && i > 'z' || 'Z')
//         else if (i == '-')

//         {
//             i++;
//         }

//         // ... existing code ...
//         // else if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
//         // {
//         //     i++;
//         // }
//         // ... existing code ...
//         else if (j == '-')
//         {
//             j--;
//         }

//     }
//     return s;
// }
// int main(int argc, char const *argv[])
// {
//     string s = "a-bC-dEf-ghIj";

//     string ans = ReverseOnlyLetters(s);

//     cout << ans;
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

bool isAlphabet(char a)
{
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
    {
        return true;
    }
    return false;
}

string ReverseOnlyLetters(string k)
{
    string s = k;

    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        // if ((s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') &&
        //     (s[j] >= 'a' && s[j] <= 'z' || s[j] >= 'A' && s[j] <= 'Z'))
        if (isAlphabet(s[i]) && isAlphabet(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }

        else if (!isAlphabet(s[i]))
        {
            i++;
        }
        //  if (!(s[j] >= 'a' && s[j] <= 'z' || s[j] >= 'A' && s[j] <= 'Z'))
        else
        {
            j--;
        }
    }
    return s;
}

int main(int argc, char const *argv[])
{
    string s = "ab-cd";

    string ans = ReverseOnlyLetters(s);

    cout << ans;
    return 0;
}