#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int missing(vector<int> arr)
{
    unordered_map<int, int> mp;

    int i = 0;

    while (i < arr.size())
    {
        mp[arr[i]]++;
        i++;
    }

    for (int i = 0; i < arr.size(); i++)
    {

        if (mp[arr[i]] > 1)
        {
        return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1, 5, 3, 4, 3, 5, 6};
    int i = 1;

    return 0;
}
