#include <iostream>
#include <vector>
using namespace std;

void genParenthisis(int open, int close, string output)
{

    if (open == 0 && close == 0)
    {
        cout << output<<" "<<endl;
        return;
    }

    // inc//
    if (open > 0)
    {
        output.push_back('(');
        genParenthisis(open - 1, close, output);
        output.pop_back();
    }

    if (open < close)
    {
        output.push_back(')');
        genParenthisis(open, close - 1, output);
        output.pop_back();
    }
}
int main(int argc, char const *argv[])
{
    int n = 3;
    int open = n, close = n;

    string output = "";

    genParenthisis(open,close,output);

    return 0;
}
