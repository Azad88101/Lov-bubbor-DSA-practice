#include <iostream>
#include <vector>
using namespace std;
void WavePrint(vector<vector<int>> arr)
{
    int rows = arr.size();
    int cols = arr[0].size();
    for (int start = 0; start < cols; start++)
    {
        if ((start & 1) == 0)
        {
            for (int top = 0; top < rows; top++)
            {
                cout << arr[top][start]<<" ";
            }
        }
        else
        {
            for (int bott = rows - 1; bott >= 0; bott--)
            {
                cout << arr[bott][start] << " ";
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
    WavePrint(arr);
    return 0;
}
