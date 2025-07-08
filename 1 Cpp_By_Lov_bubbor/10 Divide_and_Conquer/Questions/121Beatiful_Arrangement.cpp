#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

// bool isTrue(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] % (i + 1) == 0 || (i + 1) % arr[i] == 0)
//         {
//             continue;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return true;
// }

// void Permutaion(vector<int> &arr, int i, int &c)
// {
//     if (i >= arr.size())
//     {
//         if (isTrue(arr))
//         {
//             c += 1;
//         }

//         return;
//     }

//     for (int j = i; j < arr.size(); j++)
//     {

//         swap(arr[i], arr[j]);
//         Permutaion(arr, i + 1, c);
//         swap(arr[i], arr[j]);
//     }
// }

// by me  find all permutaion and cjeck

// by lakshp

void CountArrange(vector<int> &arr, int &n, int &c, int currNum)
{
    if (currNum == n + 1)
    {
        c++;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0 && ((currNum % i == 0) || (i % currNum == 0)))
        {
            arr[i] = currNum;
            CountArrange(arr, n, c, currNum + 1);
            arr[i] = 0;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n = 16;
    vector<int> arr(n + 1);
    // iota(arr.begin(), arr.end(), 1);

    int c = 0;
    CountArrange(arr, n, c, 1);

    // Permutaion(arr, 0, c);

    cout << c;

    return 0;
}
