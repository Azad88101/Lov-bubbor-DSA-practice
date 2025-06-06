#include <iostream>
#include <string.h>
using namespace std;

bool isMatch(string s, int si, string p, int pi)
{
    if(si==s.length()&&pi==p.length()){
        return true;

    }
    if(s[si]==p[pi]|| p[pi]=='?' ){

    return isMatch(s,si+1,p,pi+1);

    }

    if(p[pi]=='*'){
        bool caseA = isMatch(s,si,p,pi+1);
        bool caseB = isMatch(s,si+1,p,pi);

        return caseA||caseB;
    }
    return false;


}
int main(int argc, char const *argv[])
{



    string s = "aa", p = "a";
    int si = 0, pi = 0;
    cout<<isMatch(s, si, p, pi);

    return 0;
}
