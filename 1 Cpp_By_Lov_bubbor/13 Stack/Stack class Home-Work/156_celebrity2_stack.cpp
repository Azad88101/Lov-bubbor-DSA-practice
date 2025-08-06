#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int celeb(vector<vector<int>> mat)
{
    stack<int> st;
    int n = mat.size();

    // Step 1: Push all people onto the stack
    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }

    cout << "Initial stack: ";
    stack<int> temp = st;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Step 2: Eliminate non-celebrities
    while (st.size() != 1)
    {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        cout << "Comparing " << a << " and " << b << endl;

        if (mat[a][b])
        {
            // a knows b => a can't be celebrity
            cout << a << " knows " << b << " -> " << a << " can't be celebrity" << endl;
            st.push(b);
        }
        else
        {
            // a doesn't know b => b can't be celebrity
            cout << a << " does NOT know " << b << " -> " << b << " can't be celebrity" << endl;
            st.push(a);
        }
    }

    int ans = st.top();
    cout << "Candidate for celebrity is: " << ans << endl;

    // Step 3: Validate the candidate
    for (int i = 0; i < n; i++)
    {
        if (i == ans)
            continue;

        cout << "Checking if " << ans << " knows " << i << ": " << mat[ans][i] << endl;
        if (mat[ans][i] != 0)
        {
            cout << ans << " knows " << i << " => Not a celebrity" << endl;
            return -1;
        }

        cout << "Checking if " << i << " knows " << ans << ": " << mat[i][ans] << endl;
        if (mat[i][ans] != 1)
        {
            cout << i << " doesn't know " << ans << " => Not a celebrity" << endl;
            return -1;
        }
    }

    return ans;
}

int main()
{
    // vector<vector<int>> mat = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    vector<vector<int>> mat = {
        {1, 1, 1}, 
        {0, 0, 1}, 
        {0, 0, 0}
    };

    int result = celeb(mat);

    if (result == -1)
        cout << "No celebrity found.\n";
    else
        cout << "Celebrity is: " << result << endl;

    return 0;
}
