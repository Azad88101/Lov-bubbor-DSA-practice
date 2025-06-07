#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int ans;
    ans = n * fact(n - 1);
    return ans;
}
int main(int argc, char const *argv[])
{
    cout << fact(6);
    return 0;
}
