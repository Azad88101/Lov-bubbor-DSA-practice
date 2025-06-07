#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    // vector<vector<int>> arr;
    // vector<int> a{1, 2, 3, 4, 5, 6};
    // vector<int> b{
    //     3,
    //     3,
    //     4,
    //     3,
    //     5,
    //     4,
    //     5,
    //     5,
    // };

    // vector<int> c{3, 4, 5, 2, 3,5,6,6,4, 5, 5};
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << "\n";
    // }


//5 row 5 col initialise with -8
vector<vector<int> >arr(5,vector<int>(5,-8));
cout<<arr[1][2];


    return 0;
}
