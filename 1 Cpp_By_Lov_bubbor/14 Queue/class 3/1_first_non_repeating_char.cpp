#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> freq(26, 0);
    string s = "aac";
    queue<char> q;

    string ans;

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        freq[c - 'a']++;

        q.push(c);
        while (!q.empty())
        {
            if (freq[q.front() - 'a'] >
                1)
            {
                q.pop();
            }
            else
            {
                cout << q.front() << " ";
                ans.push_back(q.front());
                break;
            }
        }

        if (q.empty())
        {
            ans.push_back('#');
        }
    }

    cout << "\n";

    cout << ans;

    return 0;
}
