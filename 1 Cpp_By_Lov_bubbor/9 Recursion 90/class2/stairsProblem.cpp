#include <iostream>
using namespace std;
int stairs(int n)

{

    if (n == 1 || n == 0) 
    {
        return 1;
    }

    return stairs(n - 1) + stairs(n - 2);
}

int main(int argc, char const *argv[])
{
    int n = 40;
    int ans = stairs(n);
    cout << ans << "  ";
    return 0;
}
