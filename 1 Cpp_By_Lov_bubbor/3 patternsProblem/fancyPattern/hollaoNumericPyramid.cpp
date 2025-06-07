#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n-i-1; space++)
        {
            cout<<" ";
            
        }
        for ( int no = 0; no <i+1; no++)
        {
      cout<<"1";
        }
        cout<<"\n";
        
        
    }
    
}