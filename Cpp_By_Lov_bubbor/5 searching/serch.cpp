// #include <iostream>
// using namespace std;
// #include <algorithm>
// #include <vector>

// int main(int argc, char const *argv[])
// {
//     //peak mountain
      
//     return 0;
// }





























// // find the missing no.
// int main(int argc, const char **argv)
// {
//     int arr[] = {1, 2, 3, 4, 5, 7, 8};
 
//     return 0;
// }







// find the first occurence of an element n==4  ;
// int main(int argc, const char **argv)
// {
//     return 0;
// }

// using inbuild function of bary search;
//  int main(int argc, char const *argv[])
//  {
//      int arr[] = {1, 2, 3, 4, 5, 6, 7};
//      int size = 7;
//      if (binary_search(arr, arr + size, 7))
//      {
//          std::cout << "found" << std::endl;
//      }
//      else
//      {
//          std::cout << "not found" << std::endl;
//      }

//     return 0;
// }

// end no .
//  #include <iostream>
//  using namespace std;
//  int rightmostelem(int arr[], int target, int size)
//  {
//      int start = 0;
//      int end = size - 1;
//      int mid = (start + end) / 2;

//     while (start < end)
//     {
//         mid = (start + end) / 2;
//         int elem = arr[mid];

//         if (elem == target)
//         {
//             return mid;
//         }
//         else if (target < elem)
//         {
//             end = mid - 1;
//         }
//         else{
//             start = mid+1;
//         }
//     }
// }
// int main(int argc, char const *argv[])

// {
//     int arr[] = {1, 3, 5, 7, 9, 11, 13};
//     int target = 13;
//     int size = 7;
//     int index =rightmostelem(arr, target, size);
//     cout<<"indexr of "<<target <<"  is  "<<index;
//     return 0;
// }

// sple binary search

#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
     int mid = (start + end) / 2;
    while (start <= end)
    {
         mid = (start + end) / 2;
        int elem = arr[mid];

        if (elem == target)
        {
            return mid;
        }
        else if (target < elem)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int target = 2;
    int ans = binarySearch(arr, size, target);

    if (ans == -1)
    {
        std::cout << "not found" << std::endl;
    }
    else
    {
        std::cout << "target found at index " << ans << std::endl;
    }
}
