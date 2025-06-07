#include <iostream>
#include <vector>
using namespace std;
vector<bool> FindPrimes(int &l, int &r)
{
    vector<bool> Markprimes(r + 1, true);
    int i = 2;
    while (i * i <= r)
    {
        if (Markprimes[i] == true)
        {
            int j = i * i;

            if (j > r)
            {
                break;
            }

            while (j <= r)
            {
                Markprimes[j] = false;
                j += i;
            }
        }
    }
    return Markprimes;
}
int main(int argc, char const *argv[])
{
    int l = 13956;
    int r = 19893;
    int count = 0;
    vector<bool> Range = FindPrimes(l, r);
    for (int i = l; i <= r; i++)
    {
        if (Range[i] == true)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
