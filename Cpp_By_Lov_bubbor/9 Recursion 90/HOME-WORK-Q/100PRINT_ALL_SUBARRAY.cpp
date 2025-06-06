#include <iostream>

#include <vector>
using namespace std;

void printSub(vector<int> a,   int start,int end)
{
    if(end==a.size())return;

    for (int i = start; i <= end; i++)
    {
        cout<<a[i]<<" ";

    }


cout<<'\n';

    printSub(a,start,end+1);
        

}
int main(int argc, char const *argv[])
{
    vector<int> a = {1, 2, 3, 4, 5};
    int start = 0;
    int end = 0;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << s[j]<<" ";
    //     }
    //     cout<<'\n';
    // }

    printSub(a,start,end);

    return 0;
}
