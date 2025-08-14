#include <iostream>
#include <vector>
using namespace std;
int findMin(vector<int> &days, vector<int> &cost, int i)
{

    if (i >= days.size())
    {
        return 0;
    }

    int cost1 = cost[0] + findMin(days, cost, i + 1);

    int j = i;
    int passEnd = days[i] + 7 - 1;
    while (j < days.size() && days[j] <= passEnd)
    {
        j++;
    }
    int cost2 = cost[1] + findMin(days, cost, j);

    passEnd = days[i] + 30 - 1;
    int k = i;

    while (k < days.size() && days[k] <= passEnd)
    {
        k++;
    }
    int cost3 = cost[2] + findMin(days, cost, k);

    return min(cost1, min(cost2, cost3));
}
int main()
{
    vector<int> days = {1, 4, 6, 7, 8, 20}, costs = {2, 7, 15};

    cout << findMin(days, costs, 0);
    return 0;
}