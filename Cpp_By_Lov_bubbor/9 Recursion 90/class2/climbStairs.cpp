#include <iostream>
using namespace std;
int stair(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int ans = stair(n - 1) + stair(n - 2);

    return ans;
}
int main(int argc, char const *argv[])
{
    cout<<stair(4);
    return 0;
}
