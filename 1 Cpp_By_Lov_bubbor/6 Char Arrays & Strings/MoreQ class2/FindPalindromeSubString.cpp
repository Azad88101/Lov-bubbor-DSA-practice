// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// bool checkPalindrome(string y)
// {
//     int i = 0;
//     int j = y.length() - 1;
//     while (i <= j)
//     {
//         if (y[i] != y[j])
//         {
//             return false;
//         }
//         else
//         {
//             i++;
//             j--;
//         }
//     }
//     return true;
// }
// int findSubstr(string s)
// {
//     int count = 0;
//     string y;
//     for (int i = 0; i < s.length(); i++)
//     {
//         for (int j = i; j < s.length(); j++)
//         {

//             for (int k = i; k <= j; k++)
//             {
//                 // cout << s[k];
//                 y.push_back(s[k]);
//             }
//             // cout << "\n";
//             if (checkPalindrome(y))
//             {
//                 count++;
//                 y.clear();
//             }
//             else
//             {
//                 y.clear();
//             }
//         }
//     }
//     return count;
// }
// int main(int argc, char const *argv[])
// {
//     string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

//   int ans =findSubstr(s);
//   cout<<ans;
//     return 0;
// }

//  bubbor ans

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int checkPalindrome(string s, int i, int j)
{
    int count = 0;

    while (i >= 0 && j < s.length() && s[i] == s[j])
    {

        count++;
        i--;
        j++;
    }
    return count;
}
int findSubstr(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {

        int oddAns = checkPalindrome(s, i, i);
        count += oddAns;
        int evenAns = checkPalindrome(s, i, i + 1);
        count += evenAns;

        // for (int j = i; j < s.length(); j++)
        // {

        //     for (int k = i; k <= j; k++)
        //     {
        //         // cout << s[k];
        //         y.push_back(s[k]);
        //     }
        //     // cout << "\n";
        //     if (checkPalindrome(y))
        //     {
        //         count++;
        //         y.clear();
        //     }
        //     else
        //     {
        //         y.clear();
        //     }
        // }
    }
    return count;
}
int main(int argc, char const *argv[])
{
    string s = "noon";

    int ans = findSubstr(s);
    cout << ans;
    return 0;
}
