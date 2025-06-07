// #include <iostream>
// #include <vector>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // vector<int>arr
//     // int arr[3][3];
//     // int brr[2][2] ={{1,2},{2,3}};
//     int arr[4][4] = {{1, 2, 3, 4}, {2, 3, 4, 1}, {5, 6, 1, 3}, {2, 4, 6, 8}};
//     int sum = 0;

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             sum += arr[j][i];
//         }
//         cout << sum << "\n";
//         sum = 0;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[3][3] = {{5, 6, 8}, {7, 2, 4}, {1, 6, 9}};
    int search =3 ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (search == arr[i][j])
            {
                cout << "true";
                break;
            }

        }
    }

    return 0;
}