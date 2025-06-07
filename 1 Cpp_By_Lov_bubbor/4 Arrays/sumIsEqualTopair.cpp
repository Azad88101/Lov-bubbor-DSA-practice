#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int>a{1,2,3,4,5,6,7,8};
    int sum=9;



    for (int i = 0; i < a.size(); i++)
    {
       for (int j = 0; j < a.size(); j++)
       {
        if (a[i]+a[j]==sum)
        {
            cout<<"("<<a[i]<<" , "<<a[j]<<")";
        }
        
       }
       
    }
    
    return 0;
}
