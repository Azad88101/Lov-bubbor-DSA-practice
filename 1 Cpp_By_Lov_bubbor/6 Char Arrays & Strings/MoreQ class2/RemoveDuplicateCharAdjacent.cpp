#include <iostream>
#include <string>
using namespace std;
string removeDuplicate(string s)
{
    // method 11111111111111111111111111111
    //     int i = 0;
    //     while (i + 1 < s.length())
    //     {
    //         if (s[i]==s[i+1])
    //         {
    //            s.erase(i,2);
    //            i--;
    //         }
    //         else{
    //             i++;
    //         }

    //     }
    // //    string ans  = removeDuplicate(s);
    //     return s;

    //   method 2222222222222222222222222222222

    int i = 0;
    string ans = "";
    while (i < s.length())
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
        {

            cout<<ans.length();
            cout<<ans[ans.length() - 1];
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    string s = "abbaca";
    // cout <<s.length();

    cout << removeDuplicate(s);
    // cout<<removeDuplicate(copy);
    return 0;
}
