#include <iostream>
#include <vector>
using namespace std;

int find(string s, char key, int i)
{
    if (i >= s.size())
    {
        return -1;
    }
    if (s[i] == key)
    {
        return i;
    }

    return find(s, key, i + 1);
}

void findStoreInVector(string s, char key, int i, vector<int> &arr)
{
    if (i >= s.size())
    {
        return;
    }
    if (s[i] == key)
    {
        arr.push_back(i);
    }

    findStoreInVector(s, key, i + 1,arr);
}
int main(int argc, char const *argv[])
{
    string s = "azad";
    char key = 'a';
    vector<int> arr;
    findStoreInVector(s, key, 0, arr);
    // findStoreInVector()

    // cout << find(s, key, 0);

    for (auto i : arr)
    {
        cout << i+1<<" ";
    }

    return 0;
}
