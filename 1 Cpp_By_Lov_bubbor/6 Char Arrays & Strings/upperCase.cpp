#include <iostream>
using namespace std;
void toUppercase(char name[])
{
    int i =0;

    while (name[i]!='\0')
    {
       name[i]= name[i]+32;
       i++;
    }
    // cout<<name;

    // return name;
    

}
int main(int argc, char const *argv[])
{
    char name[100];
    cin.getline(name, 100);

    cout<<name<<endl;
    toUppercase(name);
    cout<<name;
    return 0;
}
