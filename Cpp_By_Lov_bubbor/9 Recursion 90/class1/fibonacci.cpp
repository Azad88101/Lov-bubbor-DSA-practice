#include <iostream>
using namespace std;

int fibonacci1(int n)
{
    // int i = 0, j = 1;
    // cout << i << " " << j << " ";

    // for (int k = 2; k < n; k++)
    // {
    //     int temp = i + j;
    //     i = j;
    //     j = temp;
    //     cout <<j << " ";
    // }
}

#include <iostream>
using namespace std;

int fibonacci(int n)
{

    int ans;
    if (n == 1)
    {

        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    ans = fibonacci(n - 1) + fibonacci(n - 2);
    // cout << ans << "   ";
    return ans;
}

// void printFibonacciSeries(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << fibonacci(i) << " ";
//     }
// }

int main()
{
    int n = 8;
    int ans = fibonacci(n);
    cout<<"\n" << ans;

    return 0;
}
