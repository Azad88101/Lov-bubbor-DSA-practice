#include <iostream>
using namespace std;
// int main(int argc, char const *argv[])
// {

// int start;
//     for (int i = 0; i < 4; i++)
//     {
//         // start =i+1;

//         for (int j =0; j < i+1; j++)
//         {
//             // cout<<start;
//             // start++;

//             cout<<i+j+1;

//         }

//         cout<<"\n";

//     }

//     return 0;
// }

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int numbers ;

    for (int i = 0; i < 5; i++)
    {
        for (int startApace = 0; startApace < n-i-1; startApace++)
        {
           cout<<" ";
        }
        for ( numbers = 0; numbers < i+1; numbers++)
        {
            cout<<i+numbers+1;
        }

        for (int revno =i*2; revno >i; revno--)
        {
            cout<<revno;
        } 
        
        cout<<"\n";

        
        
    }

    return 0;
}
