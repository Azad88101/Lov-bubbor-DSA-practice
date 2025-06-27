#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "aabccddddeeeeeeeeffgyyz";
    int i = 0;
    int n = s.size();

    int ans = 0;
    // while (i < n)
    // {
    //     int j = i + 1;

    //     while (j < n && s[j] == s[i])
    //     {
    //         j++;
    //     }

    //     s[ans++] = s[i];

    //     int count = j - i;
    //     if (count > 1)
    //     {
    //         string STOI = to_string(count);
    //         for (auto ch : STOI)
    //         {
    //             s[ans++] = ch;
    //         }
    //     }
    //     i = j;
    // }
    cout<< s<<" ";



    unordered_map<string,int>mp;
    
    return 0;
}
