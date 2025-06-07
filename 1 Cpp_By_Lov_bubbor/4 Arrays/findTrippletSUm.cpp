#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> a{10, 20, 30, 40,50};
    int sum = 80;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            for (int k = j + 1; k < a.size(); k++)
            {
                for (int p = k + 1; p < a.size(); p++)
                {

                    if (a[i] + a[j] + a[k]+a[p] == sum)
                    {
                        cout << "(" << a[i] << "," << a[j]<<","<<a[p]  << "," << a[k] << ")";
                    }
                }
            }
        }
    }

    return 0;
}
