//////    GFG
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> FindCommon(vector<int> a, vector<int> b, vector<int> c)
{
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> ans;

    /////////////////////v witout using stl se func        



    //////   yu have to remove all duplicates in all array
    // set<int> st;
    while (i < a.size() && j < b.size() && k < c.size())
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            // ans.push_back(a[i]);
            // st.insert(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto i : st)
    {
        ans.push_back(st[i]);
    }

    return ans;
    // return st;
}
int main(int argc, char const *argv[])
{

    vector<int> a{1, 5, 10, 20, 40, 80};
    vector<int> b{6, 7, 20, 80, 100};
    vector<int> c{3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> ans = FindCommon(a, b, c);

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    cout << "size of ans  " << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
