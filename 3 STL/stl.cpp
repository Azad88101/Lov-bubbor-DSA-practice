#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct product
{
    int productId;
    string productName;
    string category;
};

struct order
{
    int orderId;
    int quantity;
    int productId;
    string cutomerId;
    time_t order_Date;
};

struct customer
{
    /* data */
};

int main(int argc, char const *argv[])
{

    vector<product> products = {
        {101, "laptop", "electronics"},
        {102, "smartphone", "electronics"},
        {103, "table", "furniture"},
        {104, "notebook", "stationery"},
        {105, "chair", "furniture"},
        {106, "bottle", "kitchenware"},

    };

    deque<string> recentCustomer = {"c01", "c02", "c03", "c04"};

    recentCustomer.push_back("c05");
    recentCustomer.push_front("c00");
    // cout<<recentCustomer.at(0)<<" ";

    list<order> orders;
    orders.push_back({1, 2, 101, "c01", time(0)});
    orders.push_back({2, 3, 103, "c05", time(0)});
    orders.push_back({3, 5, 105, "c03", time(0)});

    // /    to find all cateogory we can use set library to maintain unique ness

    set<string> cateogories;
    for (const auto &produt : products)
    {
    
        cout << produt.category << "  ";
        cout << "  \n";
        cateogories.insert(produt.category);
    }

    // map

    map<int, int> stock = {
        {101, 10},
        {102, 14},
        {103, 5},
        {104, 98},
    };

    return 0;
}
