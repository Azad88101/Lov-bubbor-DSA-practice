
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<vector<int>>arr{{1,2,2,500,3},{1,2,200,4,6,2},{76,3,2,5,2,6},{6,8,5,3,5,700}};
    int max=0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
          if (arr[i][j]>max)
          {
            max=arr[i][j];
          }
          
        }
        
    }
    cout<<max;
    
        return 0;
}
