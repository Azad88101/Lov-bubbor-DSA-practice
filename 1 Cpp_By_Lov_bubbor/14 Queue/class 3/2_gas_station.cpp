#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int circular_route(vector<int> &gas, vector<int> &cost)
{
    int bal = 0;
    int total = 0;
    int start = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        total += gas[i] - cost[i];
        bal += gas[i] - cost[i];

        if (bal < 0)
        {
            bal = 0;
            start = i + 1;
        }
    }

    return total < 0 ? -1 : start;
}

int circular_route2(vector<int> &gas, vector<int> &cost)
{

    int def = 0;
    int total = 0;

    int i = 0;
    for (; i < gas.size(); i++)
    {
        total += gas[i] - cost[i];
        if (total < 0)
        {
            break; // exit when stuck
        }
    }

    def = abs(total);
    total = 0;
    for (int j = i + 1; j < gas.size(); j++)
    {
        total += gas[j] - cost[j];
    }

    if (total >= def)
        return i + 1;

    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    // vector<int> gas = {4, 6, 3, 4, 8};
    // vector<int> cost = {3, 6, 7, 1, 3};
    cout << circular_route(gas, cost) << endl;

    cout << circular_route2(gas, cost) << endl;

    return 0;
}
