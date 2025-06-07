// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// string CustomSort(string s, string order)
// {
//     int i = 0;
//     string ans;
//     while (i <= s.length() - 1 || i <= order.length() - 1)
//     {
//         if (order[i] && s.find(order[i]) != string::npos)
//         {
//             cout << i << '\n';
//             cout << order[i] << '\n';

//             ans.push_back(order[i]);

//             i++;
//         }
//         else
//         {
//             cout << i << '\n';
//             cout << order[i] << '\n';
//             cout << s[i] << '\n';

//             ans.push_back(s[i]);
//             i++;
//         }
//     }
//     return ans;
// }
// int main(int argc, char const *argv[])
// {
//     string order = "bcafg";
//     string s = "abcd";
//     // output   "bcad\u0000"
//     // expected "bcad"

//     string ans = CustomSort(s, order);

//     cout << ans;
//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string CustomSort(string s, string order)
{
    int i = 0;
    string ans;
    while (i < order.length()) // Change to only iterate through 'order'
    {
        int pos = s.find(order[i]);
        if (pos != string::npos)
        {
            cout << i << '\n';
            cout << order[i] << '\n';

            ans.push_back(order[i]);
            s.erase(pos, 1); // Remove the character from 's' after using it
        }
        i++;
    }

    // Append remaining characters from 's' to 'ans'
    ans += s; // Add any remaining characters in 's' to the result
sort(ans.begin() + order.length(), ans.end());
    return ans;
}

int main(int argc, char const *argv[])
{
       string order = "kqeep"; // Adjusted order to match expected output
    string s = "kqepe";
    // output   "bcad"
    // expected "bcad"

    string ans = CustomSort(s, order);

    cout << ans;
    return 0;
}