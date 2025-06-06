#include <iostream>
#include <vector>
using namespace std;

void find(string &s, char &f, int i, vector<int> &ans)
{
    if (i >= s.length())
    {
        return;
    }
    // cout << s[i] << endl;

    if (s[i] == f)
    {

        cout<<"found at "<<i<<" \n";
ans.push_back(i);
        // return true;
        // return i;
    }

    return find(s, f, i + 1, ans);
}
// suppose we want to take multiple index bcz there is multiple charater we found same ex;= a
// so we can use vector and pass by refesnec
int main(int argc, char const *argv[])
{
    string s = "azadasdjkshiou43i4htjhkjekjtbkjadadfddaf";
    char f = 'a';
    int i = 0;
    vector<int> ans;
    // int ind = 0;
    find(s, f, i, ans);


    for(auto var : ans)
    {
        cout<<var<<"    ";
    
    }



    // cout<<0343;

    return 0;
}
