#include <iostream>
#include <vector>
using namespace std;
void printSubSequence(string &s, int i, vector<string> &output, string temp)
{
    if (i >= s.length())
    {
        // cout << output << endl;
        output.push_back(temp);
        return;
    }
    // exclude
    printSubSequence(s, i + 1, output, temp);
    // include
    temp.push_back(s[i]);
    printSubSequence(s, i + 1, output, temp);
}

int main(int argc, char const *argv[])
{
    string s = "abc";
    int i = 0;
    vector<string> output;
    string temp = "";
    printSubSequence(s, i, output, temp);
    // Change the type of 'output' parameter in printSubSequence function to string&

    for (auto s : output)
    {
        cout << s;
    }
    return 0;
}
