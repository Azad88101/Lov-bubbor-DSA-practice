#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=5;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j <i+1; j++)
    {
        if (false)
        {
            for (int space = 0; space < i-1; space++)
            {
               cout<<" ";
            }
            
        }
        else{
              cout<<j+1<<" ";

        }
        
      
        
       
    }
    cout<<" \n";
    
}

    return 0;
}
