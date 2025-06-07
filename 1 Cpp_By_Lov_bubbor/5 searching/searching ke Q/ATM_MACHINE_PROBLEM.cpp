#include <iostream>
#include <vector>
using namespace std;

string allocateMoney(int n, int money, vector<int> peopleWantMoney)
{
    //// insted of using int it will remove the 1st zero we can use string here

    string alocation = "";
    for (int i = 0; i < n; i++)
    {
        if (peopleWantMoney[i] <= money)
        {
            alocation += '1';
            // cout << 1;
            money -= peopleWantMoney[i];
        }
        else
        {
            alocation += '0';
            // cout << 0;
        }
    }
    return alocation;
}
int main(int argc, char const *argv[])
{
    //// insted of using int it will remove the 1st zero we can use string here  {11,5,3,2,1}

    int t = 2; // no of test case will be executed
    // cin>>t;
    int n = 5; // no of people;
    // cin >> n;
    int money = 10; // totla money in atm machine

    // cin >> money;
    int i = 0;
    vector<int> peopleWantMoney = {11, 5, 3, 2, 1};

    // vector<int> peopleWantMoney;
    // while (i < n)
    // {
    //     int temp;
    //     cin >> temp;
    //     peopleWantMoney.push_back(temp);
    //     i++;
    // }

    string ans = allocateMoney(n, money, peopleWantMoney);

    cout << ans;
    return 0;
}
