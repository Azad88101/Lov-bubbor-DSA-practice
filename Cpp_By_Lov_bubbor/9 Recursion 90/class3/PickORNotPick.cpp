#include <iostream>
using namespace std;

void subsequence(string &s, int i, string &output)
{
    if (i >= s.length())
    {
        cout << output << "\n";
        return;
    }

    subsequence(s, i + 1, output);

    output.push_back(s[i]);
    subsequence(s, i + 1, output);
}

int main(int argc, char const *argv[])
{
    string s = "xy";
    int i = 0;
    string output;
    subsequence(s, i, output);

    return 0;
}
