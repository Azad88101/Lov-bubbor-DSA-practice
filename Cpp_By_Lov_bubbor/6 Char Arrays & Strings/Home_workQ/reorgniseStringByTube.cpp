#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reorganizeString(string str)
{
    vector<int> hash(26, 0);
    for (char c : str)
    {
        hash[c - 'a']++;
    }

    int maxFreq = 0, letter = 0;
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > maxFreq)
        {
            maxFreq = hash[i];
            letter = i;
        }
    }

    if (maxFreq > (str.length() + 1) / 2)
        return "";

    vector<char> res(str.length());
    int idx = 0;

    // Fill all even places with majority character
    while (hash[letter]-- > 0)
    {
        res[idx] = (char)(letter + 'a');
        idx += 2;
    }

    // Fill the remaining characters
    for (int i = 0; i < 26; i++)
    {
        while (hash[i]-- > 0)
        {
            if (idx >= res.size())
                idx = 1;
            res[idx] = (char)(i + 'a');
            idx += 2;
        }
    }

    return string(res.begin(), res.end());
}

int main(int argc, char const *argv[])
{
    string str = "xxxkpwr";

    string ans = reorganizeString(str);

    cout << ans;
    return 0;
}
