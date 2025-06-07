#include <iostream>
#include <vector>
using namespace std;
vector<int> FindSum(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size();
    // vector<int>num;
    while (s <= e)
    {
        int sum = arr[s]+arr[e];
        // int mid = s + (e - s) / 2;
        if (sum == target)
        { 


            return {s+1,e+1};

        }
        else if (sum<target)
        {
            s++;
            
        }
        else{
            e--;
        }
        
    }
    return{};
}

int main(int argc, char const *argv[])
{
    vector<int> arr{2, 7, 11, 15};
    int target = 9;
   vector<int>ans= FindSum(arr, target);
   for(auto var : ans)
   {
    cout<<var;
   }
    return 0;
}
