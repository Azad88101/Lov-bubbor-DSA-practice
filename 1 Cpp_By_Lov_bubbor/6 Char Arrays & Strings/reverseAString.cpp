#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char name[50];
    cin>>name;
    int i = 0,j=0;
    while (name[j]!='\0')
    {
      j++;
    }
    j--;
    // cout<<j;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }

cout<<name;
    return 0;
}
