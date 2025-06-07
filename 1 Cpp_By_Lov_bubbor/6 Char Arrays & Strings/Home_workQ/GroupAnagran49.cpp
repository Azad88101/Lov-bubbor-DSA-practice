#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

/// bubbor approact  h mujhe smajh aagyi h isme map use kiya h 1111111111111111111111111111111111

vector<vector<string>> findGroups1(vector<string> strs)
{

    map<string, vector<string>> mp; /// created a map  key is string ans vlaue is array

    // extracting the 1 element or string
    for (auto str : strs)
    {
        string s = str;
        // s is like a key & str is the value
        // s ko sort kr diya taki aur duplicates na bne ;

        sort(s.begin(), s.end());
        // cout<<s<<'\n';
        // cout<<str<<'\n';

        // aur fir s-> key ko insert kar diiya and
        // str normal string ko usme add krdiya

        mp[s].push_back(str);

        // agar   s ko sort krne ke bbad same character hota h to  wo string usi group me add ho jayegi
    }
    vector<vector<string>> ans; // is type ka ans hame return krna h

    // is for loop se ham ans me apna group add kr rhe h

    for (auto value = mp.begin(); value != mp.end(); value++)
    {

        ans.push_back(value->second); // second word taki hum value le sake and
        // for key we use first
    }
    return ans;
}

/// by chat gpt aur mujhe kya hi smjha aayega; 222222222222222222222222222222222222222222222222222222222222222
vector<vector<string>> groupAnagrams2(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;

    for (const string &str : strs)
    {
        // Create a frequency-based key
        vector<int> count(26, 0);
        for (char c : str)
        {
            count[c - 'a']++;
        }

        // Convert frequency array to a string key
        string key;
        for (int i = 0; i < 26; i++)
        {
            key += "#" + to_string(count[i]); // Ensures uniqueness
        }

        mp[key].push_back(str);
    }

    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it->second);
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat", "tab", "abt"};
    vector<vector<string>> ans = findGroups1(strs);
    for (auto var : ans)
    {
        // Print each group of anagrams
        for (auto word : var)
        {
            cout << word << " ";
        }
        cout << endl; // New line after each group
    }
    return 0;
}
