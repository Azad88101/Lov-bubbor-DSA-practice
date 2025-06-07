#include <iostream>
#include <vector>
using namespace std;
int FindPeak(vector<int> ans)
{
    int s = 0;
    int e = ans.size();
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (ans[mid] < ans[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return e;
}
int main(int argc, char const *argv[])
{
    vector<int> arr{1,2,3,4,5,6,7,8,9,10,90,80,60,30,2,1};
    int ans = FindPeak(arr);
    cout<<ans<<"\t" <<arr[ans];

    return 0;
}
