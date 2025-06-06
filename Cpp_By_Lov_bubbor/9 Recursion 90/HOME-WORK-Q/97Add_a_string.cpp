#include <iostream>
#include <string.h>
using namespace std;

void addString(string s1, string s2, int i, int j, int carry , string &result)
{
    if (i < 0 && j < 0)
    {
        if (carry!=0)
        {
            result=char(carry+'0')+result;
        }
        
        return;
    }

    int d1 = (i >= 0) ? s1[i] - '0' : 0;
    int d2 = (j >= 0) ? s2[j] - '0' : 0;

    int sum = d1 + d2 + carry;
    result = char(sum % 10 + '0') + result;
    carry = sum / 10;
    addString(s1, s2, i - 1, j - 1, carry, result);
}

int main(int argc, char const *argv[])
{

    string n1 = "54";
    string n2 = "87";
    int i = n1.size() - 1;
    int j = n2.size() - 1;

    string result="";
    addString(n1,n2,i,j,0,result);

    cout<<result;

    // iterative solution
    // int carry = 0;
    // int sum = 0;
    // for (; i >= 0 || j >= 0; i--, j--)
    // {
    //     // cout << n1[i] << " " << n2[j] << '\n';

    //     int d1 = n1[i] - '0';
    //     int d2 = n2[j] - '0';

    //     if (i < 0)
    //     {
    //         d1 = 0;
    //     }

    //     if (j < 0)
    //     {
    //         d2 = 0;
    //     }

    //     // cout<<d1<<" "<<d2<<"\n";

    //     int sum = d1 + d2 + carry;

    //     result = char(sum % 10 + '0') + result;
    //     carry = sum / 10;

    //     // cout<<sum<<" ";
    //     // if (sum >= 10)
    //     // {
    //     //     carry = sum / 10;
    //     //     sum = sum % 10;
    //     // }

    //     // cout<<sum<<" \n";
    // }

    // cout << result;

    return 0;
}
