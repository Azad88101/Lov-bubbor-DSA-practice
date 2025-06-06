#include <iostream>
#include <string>
#include <climits>
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

// method 2 by bubbor 22222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
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

int main(int argc, char const *argv[])
{
    string s = "baaba";

    string ans = reorgnise2(s);
    cout << ans;
    return 0;
}
