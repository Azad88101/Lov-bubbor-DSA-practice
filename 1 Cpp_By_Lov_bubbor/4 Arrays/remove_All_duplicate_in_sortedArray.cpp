#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0, j = 1;

    while (j < nums.size())
    {

        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }

        j++;
    }
    return i + 1;
}
int main(int argc, char const *argv[])
{

    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int size = removeDuplicates(arr);
    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
