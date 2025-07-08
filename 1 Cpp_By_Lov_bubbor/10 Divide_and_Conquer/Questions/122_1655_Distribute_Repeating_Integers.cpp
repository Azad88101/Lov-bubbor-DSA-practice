#include <iostream>
#include <vector>
#include <unordered_map>
#include <numeric>
using namespace std;

bool Distribute(vector<int> &count, vector<int> &quantity, int ith)
{
    if (ith == quantity.size())
    {
        return true;
    }

    for (int i = 0; i < count.size(); i++)
    {
        if (count[i] >= quantity[ith])
        {
            count[i] -= quantity[ith];
            if (Distribute(count, quantity, ith+1))
            {
                return true;
            }
            count[i] += quantity[ith];
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,3};
    vector<int> quantity = {2};
    unordered_map<int, int> mp;
    for (auto v : nums)
    {
        mp[v]++;
    }

    vector<int> count;
    for (auto v : mp)
    {
        count.push_back(v.second);
    }



 cout<<   Distribute(count,quantity,0);
    return 0;
}
