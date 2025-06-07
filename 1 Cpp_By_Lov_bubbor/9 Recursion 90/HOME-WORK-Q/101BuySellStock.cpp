#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// 1st approah tle maar gya
// int sellStock(vector<int> arr)
// {
//     int maxi = INT_MIN;
//     for (int s = 0; s < arr.size(); s++)
//     {
//         for (int e = s + 1; e < arr.size(); e++)
//         {
//             maxi = max(maxi, arr[e] - arr[s]);
//         }
//     }
//     return maxi<0?0:maxi;
// }

int sellStock(vector<int> arr)
{
    // int maxi = INT_MIN;
    int buy_stock = arr[0];

    int profit = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < buy_stock)
        {
            buy_stock = arr[i];
        }
        else
        {
            int curr_profit = arr[i] - buy_stock;
            profit = max(profit, curr_profit);
        }
    }
    return profit;
    // return maxi<0?0:maxi;
}

// recursion

void sellStockRec(vector<int> &arr, int &i, int &max_profit, int &buy_stock)
{

    if (i == arr.size())
        return;

    if (arr[i] < buy_stock)
    {

        // buy stock aribale jo h wo tumahare sabse kam value lega stock ki
        buy_stock = arr[i];
    }
    if (arr[i] - buy_stock > max_profit)
    {
        max_profit = arr[i] - buy_stock;
    }
    i += 1;
    sellStockRec(arr, i, max_profit, buy_stock);
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    // vector<int> arr = {7, 6, 5, 4, 3, 2, 1};
    // cout << sellStock(arr);

    int i = 1;
    int max_profit = 0;
    int buy_stock = arr[0];
    sellStockRec(arr, i, max_profit, buy_stock);

    cout << max_profit;
    return 0;
}
