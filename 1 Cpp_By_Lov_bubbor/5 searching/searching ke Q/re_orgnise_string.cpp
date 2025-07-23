#include <iostream>
#include <vector>
#include <string>
using namespace std;

string orgnise(string &s)
{
    int n = s.length();
    vector<int> FreqMp(26, 0);

    for (auto v : s)
    {
        FreqMp[v - 'a']++;
    }

    int maxFreq = 0;
    char freqChar;
    for (int i = 0; i < 26; i++)
    {
        if (FreqMp[i] > maxFreq)
        {
            maxFreq = FreqMp[i];
            freqChar = i + 'a';
        }
    }

    if (maxFreq > (n + 1) / 2)
        return "";

    int idx = 0;
    string ans(n, ' ');
    /// evely

    while (FreqMp[freqChar - 'a'] > 0)
    {
        ans[idx] = freqChar;
        idx += 2;
        FreqMp[freqChar - 'a']--;
    }

    /// oddd
    // fill the blanks

    for (int i = 0; i < 26; i++)
    {
        while (FreqMp[i] > 0)
        {
            if (idx >= n)
                idx = 1;
            ans[idx] = i + 'a';
            idx += 2;
            FreqMp[i]--;
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{

    string s = "aaabb";

    cout << orgnise(s);

    return 0;
}
