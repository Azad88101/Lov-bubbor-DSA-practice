#include <iostream>
#include <string.h>
using namespace std;

bool palindrome(char word[])
{
    bool ans;
    int i = 0;
    int j = strlen(word) - 1;
    while (i <= j)
    {
        // swap(word[i],word[j]);
        // i++;
        // j--;
        if (word[i] == word[j])
        {
            ans = true;
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    char word[100];
    cin.getline(word, 100);

    bool ans = palindrome(word);
    cout << ans;
    return 0;
}
