#include <iostream>
#include <vector>
using namespace std;
void findsum(vector<int> &arr, int sum, int t, vector<int> &temp, vector<vector<int>> &ans, int idx)
{
    cout << "Current sum: " << sum << ", target: " << t << ", current temp: ";
    for (int x : temp)
        cout << x << " ";
    cout << endl;

    if (sum == t)
    {
        cout << "Target met! Adding to ans: ";
        for (int x : temp)
            cout << x << " ";
        cout << endl;
        ans.push_back(temp);
        return;
    }
    if (sum > t)
    {
        cout << "Sum exceeded target, backtracking.\n";
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        cout << "Choosing: " << arr[i] << endl;
        temp.push_back(arr[i]);
        // sum += arr[i];
        findsum(arr, sum + arr[i], t, temp, ans, i);
        cout << "Backtracking: removing " << arr[i] << " from temp\n";
        // sum -= arr[i];
        temp.pop_back();
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {2,5,2,1,2};
    vector<int> temp;
    vector<vector<int>> ans;
    int t = 5;

    findsum(arr, 0, t, temp, ans, 0);
    cout << "Total combinations found: " << ans.size() << endl;

    for (auto v : ans)
    {
        for (auto m : v)
        {
            cout << m << " ";
        }
        cout << endl;
    }

    return 0;
}
