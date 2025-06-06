#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int j;
    int i;



    char ch=97;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i+1; j++)
        {
           cout<<char(j+'A');
        
        
        }
        for (int k = i; k > 0; k--)
        {
            cout << char(k + 'A'-1 );           
        }
        cout << "\n";

        
    }
    
}


