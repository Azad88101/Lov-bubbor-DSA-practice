#include <iostream>
#include <vector>
using namespace std;

void sayNum(int n, vector<string> arr)
{

    if (n == 0)
        return;

    int dig = n % 10;
    n = n / 10;

    sayNum(n, arr);

    cout << arr[dig] << "  ";
}
int main()
{

    vector<string> arr = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    sayNum(453, arr);
    return 0;
}