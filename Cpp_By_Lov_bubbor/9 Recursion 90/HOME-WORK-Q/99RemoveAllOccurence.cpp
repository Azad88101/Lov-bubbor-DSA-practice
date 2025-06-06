#include <iostream>
#include <string.h>
using namespace std;

string removeOccurence(string s, string part)
{

    int ind = s.find(part);
    if (ind == string::npos)
    {
        return s;
    }
    s.erase(ind, part.size());

   return removeOccurence(s,part);
}
int main(int argc, char const *argv[])
{
    string s = "asdsaasdssdsdsdsdedeserdersdessd";

    string part = "de";


   string ans =  removeOccurence(s,part);
   cout<<ans;
    return 0;
}
