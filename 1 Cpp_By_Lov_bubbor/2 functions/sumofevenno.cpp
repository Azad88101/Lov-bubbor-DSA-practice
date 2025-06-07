#include <iostream>
using namespace std; // namespace std

int sumofeven(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int sum = sumofeven(10);
    cout << sum;

    return 0;
}
