#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void maxProfitSell(vector<int> &arr, int i, int &maxProfit, int minPrice)
{
    if (i >= arr.size())
    {
        return;
    }

    if (arr[i] < minPrice)
    {
        minPrice = arr[i];
    }
    if (arr[i] - minPrice > maxProfit)
    {
        maxProfit = arr[i] - minPrice;
    }

    maxProfitSell(arr, i + 1, maxProfit, minPrice);
}

int main(int argc, char const *argv[])
{
    vector<int> price = {7, 1, 5, 3, 6, 4};

    // int i=0;
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;

    maxProfitSell(price, 0, maxProfit, minPrice);

    cout << maxProfit << '\n';

    maxProfit = INT_MIN;
    for (int i = 0; i < price.size() - 1; i++)
    {
        if (price[i] < minPrice)
        {
            minPrice = price[i];
        }

        if (price[i] - minPrice > maxProfit)
        {
            maxProfit = price[i] - minPrice;
        }
    }
    cout << maxProfit;

    return 0;
}
