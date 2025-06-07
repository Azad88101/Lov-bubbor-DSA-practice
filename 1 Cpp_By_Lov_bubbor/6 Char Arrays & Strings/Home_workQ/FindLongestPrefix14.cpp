#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
string findPrefix(vector<string> str)
{
    if (str.empty()) return "";
    sort(str.begin(), str.end());
    int i = 0;

    string ans = "";
    string first = str[0];
    string second = str[str.size() - 1];


for(auto v : str)
{
    cout<<v;
    
}

    while (i < first.length())
    {

        if (first[i] == second[i])
        {
            ans.push_back(first[i]);
            i++;
        }
        else
        {
            break;
        }
    }

    return ans;
}
int main(int argc, char const *argv[])
{
    vector<string> str = {"", "abc", "abcd"};



    string ans = findPrefix(str);
    cout << ans;

    //     vector<string> v = {""};
    // cout<<"ans"<<v.size();
    return 0;
}
