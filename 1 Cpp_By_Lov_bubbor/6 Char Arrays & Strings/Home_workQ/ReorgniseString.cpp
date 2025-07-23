#include <iostream>
#include <string>
#include <climits>
#include <vector>
using namespace std;
// metjod 1 i mak thiss  using two pointer approach 111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
string reorgnise1(string s)
{

    if (s.length() == 1)
    {
        return s;
    }

    int l = 0;
    int i = 1;
    int h = s.length() - 1;
    while (i <= h)
    {
        if (s[l] == s[i] && s[i] != s[h])
        {
            swap(s[i], s[h]);
            i++;
            h--;
            l++;
        }
        // if (s[l] != s[i])
        else
        {

            l++;
            i++;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            return "";
        }
    }

    return s;
}

// method 2 by bubbor 222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
string reorgnise2(string s)
{

    int hash[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i] - 'a']++;
    }

    char most_frequent;

    int frequency = INT_MIN;
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > frequency)
        {
            frequency = hash[i];
            most_frequent = i + 'a';
        }
    }

    int in = 0;
    while (frequency > 0 && in < s.length())
    {
        s[in] = most_frequent;
        in += 2;
        frequency--;
    }

    if (frequency != 0)
    {

        return "";
    }

    hash[most_frequent - 'a'] = 0;
    for (int i = 0; i < 26; i++)
    {
        while (hash[i] > 0)
        {
            in = in >= s.length() ? 1 : in;
            s[in] = i + 'a';
            in += 2;
            hash[i]--;
        }
    }

    return s;
}
// 33333333333333333333333333333333333333333333333333333333333333333333333333333333333
string reorganizeString(string s)
{
    vector<int> freq(26, 0);
    int n = s.length();

    // Count frequencies
    for (char ch : s)
    {
        freq[ch - 'a']++;
    }

    // Find the most frequent character
    int maxFreq = 0;
    char maxChar;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = 'a' + i;
        }
    }

    // If the most frequent character is more than (n+1)/2, not possible
    if (maxFreq > (n + 1) / 2)
    {
        return "";
    }

    // Result string
    string res(n, ' ');

    int idx = 0;
    // Place the most frequent character at even indices
    while (freq[maxChar - 'a'] > 0)
    {
        res[idx] = maxChar;
        idx += 2;
        freq[maxChar - 'a']--;
    }

    // Place the remaining characters
    for (int i = 0; i < 26; i++)
    {
        while (freq[i] > 0)
        {
            if (idx >= n)
                idx = 1; // Move to odd indices
            res[idx] = 'a' + i;
            idx += 2;
            freq[i]--;
        }
    }

    return res;
}
int main(int argc, char const *argv[])
{
    string s = "baaba";

    string ans = reorganizeString(s);
    cout << ans;
    return 0;
}
