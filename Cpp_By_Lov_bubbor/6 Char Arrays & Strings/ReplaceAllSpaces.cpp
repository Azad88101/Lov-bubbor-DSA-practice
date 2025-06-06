#include <iostream>
#include <string.h>
using namespace std;


int main(int argc, char const *argv[])
{
    char sentance[100];

    cin.getline(sentance,100);
    int i =0;
    
    // cout<<strlen(sentance);
    while (i<strlen(sentance))
    {
       if (sentance[i]==' ')
       {
        sentance[i]='@';
        i++;
       }
       else{
        i++;
       }
       
    }
    cout<<sentance;
    
    
    return 0;
}
