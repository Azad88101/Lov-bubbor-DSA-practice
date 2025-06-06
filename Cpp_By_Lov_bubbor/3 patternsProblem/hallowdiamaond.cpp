#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout <<" ";
        }

        for (int k = 0; k < i * 2 +1; k++)
        {
            if (k == 0||k == i * 2)
            {
                cout << "*";
            }
            else {

            cout <<" ";}
        }

        cout << "\n";
    }






    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
           
        }
        //star
        for (int k = 0; k <2*n-(2*i+1); k++)
        {
            if (k==0||k==2*n-(2*i+1+1))
            {
               cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";

        
    }
}
