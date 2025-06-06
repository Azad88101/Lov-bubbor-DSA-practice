#include <iostream>
#include <vector>
using namespace std;
void PrintASWave(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();
    for (int  startcolumn = 0; startcolumn < col; startcolumn++)
    {
        if ((startcolumn & 1)==0)
        {
          for (int i = 0; i < row; i++)
          {
            cout << arr[i][startcolumn]<<" ";
          }
          
        }
        else
        {
            for (int j = row-1; j >=0; j--)
            {
                cout<<arr[j][startcolumn]<<" ";
            
            }
            
        }
        cout<<"\n";
        
    }
    
}
int main(int argc, char const *argv[])
{
    vector<vector<int>> arr{{1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12}};
    PrintASWave(arr);
    return 0;
}
