
#include <iostream>
using namespace std;

int ninjaAndTriangle(int n)
{
    // Write your code here.

    for (int i = 0; i < n; i++)
    {
        // space print kro
        for (int j = n-i-1; j > 0; j--)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
            cout << "\n";

    }
    return 0;
}
int main(int argc, char const *argv[])
{


    // ninjaAndTriangle(6);
    int n=7;

     int level=0;
    int stars=0;
    while(stars+(level+1)<=n){
        level++;
        stars+=level;
    }
    return level;
    return 0;
}
