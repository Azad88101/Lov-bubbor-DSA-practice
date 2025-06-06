#include <iostream>
#include <vector>
using namespace std;

int minimumCost(vector<int> &days, vector<int> &cost, int i)
{
    if (i>=days.size())
    {
        return 0;
    }
    
    int cost1 = cost[0] + minimumCost(days, cost, i + 1);
    // while (i<cost.size())
    // {

    // }
    int passendDay = days[i] + 7 - 1;
    int j = i;

    while (j < days.size() && days[j] <= passendDay)
    {
        j++;
    }

    int cost7 = cost[1] + minimumCost(days, cost, j);

    passendDay = days[i] + 7 - 1;
    int k = i;

    while (k < days.size() && days[k] <= passendDay)
    {
        k++;
    }
    int cost30 = cost[2] + minimumCost(days, cost, k);

    return min(cost1, min(cost7, cost30));
}

int main(int argc, char const *argv[])
{
    vector<int> days = {1,2,3,4,6,8,9,10,13,14,16,17,19,21,24,26,27,28,29};
    vector<int> cost = {3,14,50};

    cout << minimumCost(days, cost, 0);

    return 0;
}
