#include <iostream>
#include <vector>
using namespace std;
void findPer(string s, int index)
{
    if (index >= s.size())
    {
        cout << s << " ";
    }
    for (int i = index; i < s.size(); i++)
    {
        swap(s[index], s[i]);
        findPer(s, index + 1);
        // swap(s[index],s[i]);
    }
}

int main(int argc, char const *argv[])
{
    string s = "abca";
    findPer(s, 0);
    return 0;
}
