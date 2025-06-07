
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    //    for (int i = 0; i < 3; i++)
    //    {
    //     for (int j = 0; j < 5; j++)
    //     {                                       rectangle
    //     cout << " * ";
    //         /* code */
    //     }

    //     cout << "\n";
    //    }

    // for (int i = 0; i < 4; i++)
    // {

    //     for (int j = 0; j < 4; j++)                   perfect square
    //     {
    //         cout << " *";
    //     }
    //   cout << "\n";
    // }

    // int n;
    // cout<<"no of rows";
    // cin >> n;

    // for (int i = 0; i < 6; i++)
    // {

    //     if (i == 0 || i == 5)
    //     {
    //         for (int j = 0; j < 5; j++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << "* ";
    //     }
    //     else
    //     {
    //         cout << "* "; //1 st row ka phle elemt
    //         for (int i = 0; i < 3; i++) //kkhaali space print krne ke liye
    //         {
    //             cout << " ";
    //         }

    //         cout << "* "; //last elem
    //         // cout << "*";
    //         // cout << "*";
    //     }

    //     cout << "\n";
    // }

    int rowc;
    cout << "no of rows";
    cin >> rowc;
    int colc;
    cout << "no of column";
    cin >> colc;

    for (int row = 0; row < rowc; row++)
    {
        if (row == 0 || row == rowc - 1)
        {
            for (int j = 0; j < colc; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "*";
            for (int i = 0; i < colc - 2; i++)
            {
                cout << "  ";
            }
            cout << " *";
        }
        cout << "\n";
    }

    // int rowc;
    // cout << "no of rows";
    // cin >> rowc;

    // for (int i = 0; i < rowc; i++)  // pyramic
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // reverse pyramid
    //  int n ;
    //  cin>>n;
    //  for (int row = 0; row < n; row++)
    //  {
    //      for (int colm = 0; colm <n-row; colm++)
    //      {
    //          std::cout << "*";
    //      }
    //      cout<<"\n";

    //     /* code */
    // }







    // Read the number of rows from the user for the pyramid
    // int n;
    // cin >> n;

    // // Loop through each row of the pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     // Loop through each column in the current row of the pyramid
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         // Print the column number plus one (to start from 1 instead of 0) to form the pyramid pattern
    //         cout << j+1;
    //     }
    //     // Move to the next line after each row to form the pyramid shape
    //     cout << "\n";
    // }





     int n;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n-i; j++)
        {
            cout<<j+1;
         
        }
        cout<<"\n";
      
    }
    

    return 0;
}
