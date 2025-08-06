

#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s)
{
    // stack<char> st;
    // string safe = "abc";
    // int times;

    // for (char c : s) {
    //     st.push(c);
    //     if (c == 'c') {
    //         times = 3;
    //         while (!st.empty() && times--) {
    //             if (safe[times] != st.top()) {
    //                 return false;
    //             }
    //             st.pop();
    //         }
    //         if (times > 0) {
    //             return false;
    //         }
    //     }
    // }

    // return st.empty() ? true : false;

    // i have  two solutions
    string safe = "abc";
    while (s.find(safe) != string::npos)
    {
        int pos = s.find(safe);
        s.erase(pos, 3);
    }
    return s.size() == 0 ? true : false;
}

int main(int argc, char const *argv[])
{

    string s = "abcabcababcc";

    cout << isValid(s);
    return 0;
}
