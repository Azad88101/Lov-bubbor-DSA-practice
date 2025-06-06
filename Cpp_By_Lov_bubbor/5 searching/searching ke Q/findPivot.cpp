#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> ans)
{
    int s = 0;

    int e = ans.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (s==e)
        {

            return s;
        }
        
        if (mid <= e && ans[mid] > ans[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= s && ans[mid - 1] > ans[mid])
        {
            return mid - 1;
        }
        // if (ans[s] == ans[mid] && ans[mid] == ans[e])
        // {
        //     s++;
        //     e--;
        // }
        else if (ans[s] > ans[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    vector<int> arr{2,3,1};
    int idx = findPivot(arr);
    std::cout << "  index  " << idx << " ,  value is  " << arr[idx] << std::endl;
    return 0;
}
