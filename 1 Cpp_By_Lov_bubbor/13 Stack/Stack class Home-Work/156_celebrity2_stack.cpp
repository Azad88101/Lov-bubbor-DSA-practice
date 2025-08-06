#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int celeb(vector<vector<int>> mat)
{

    stack<int> st;
    int n = mat.size();

    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }

    while (st.size() != 1)
    {
        int a = st.top();
        st.pop();

        int b = st.top();
        st.pop();
        if (mat[a][b])
        {
            st.push(b);
        }
        else if (mat[b][a])
        {
            st.push(a);
        }
    }

    int ans = st.top();

    for (int i = 0; i < n; i++)
    {
        if (i == ans)
            continue;

        // Celebrity shouldn't know anyone
        if (mat[ans][i] != 0)
            return -1;

        // Everyone should know celebrity
        if (mat[i][ans] != 1)
            return -1;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // vector<vector<int>> mat = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    vector<vector<int>> mat = {{1, 1, 1}, {0, 1, 0}, {1, 0, 1}};

    cout << celeb(mat);
    return 0;
}
