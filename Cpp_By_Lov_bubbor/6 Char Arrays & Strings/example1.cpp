#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // char name[15];
    // // cin >> name;

    // // getline(name,cin); this is not working
    // cin.getline(name,50);
    // cout << name << "\n";
    // // cout << name[5] << "\n";

    // // int v = (int) name[0];
    // // cout<<v;

    // char name[50];
    // cin>>name[2];
    // cin>>name[49];
    // cin>>name;
    // cin.getline(name,50);

    //  null caharateer is termination the string

    char name[50];
    cin >> name;
    // cout << strlen(name);
    int length = 0;
    int i = 0;
    while (name[i] != '\0') // this is null char

    {
        length++;

        i++;
    }
    cout << length;
    return 0;
}
