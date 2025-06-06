#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 2, 54, 2, 2, 435, 3, 4, 23, 23, 23, 23, 332, 32, 34, 14, 3, 53, 45, 234, 67, 34, 34, 523, 4, 53, 45, 324, 52, 345, 34, 5, 34, 5234, 5, 234};
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int key = 5234;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            std::cout << "index of you key is" << mid << std::endl;
            cout << "velue to be searched " << arr[mid];
        }

        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return 0;
}
