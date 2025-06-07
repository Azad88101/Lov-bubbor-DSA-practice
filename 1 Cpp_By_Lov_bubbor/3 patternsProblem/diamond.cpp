#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
     for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < i + 1; star++)
        {
            cout << " * ";
        }
        cout << "\n";
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {
            cout << " * ";
        }
        cout << "\n";
    }

}
