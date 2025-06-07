#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int compress1(vector<char> &chars)

{
    char count = '1', index = 0;
    int i = 0, j = i + 1;
    while (j <= chars.size())
    {
        if (chars[i] == chars[j])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            // int prev = i;
            chars[index++] = chars[i];
            // index++;
            if (count > '1')
            {
                // chars[prev] = count;
                // count = '1';

                chars[index++] = count;
                // index++;
                count = '1';
            }
            i++;
            j++;
        }
    }

    chars[index++] = chars[i];

    if (count > '1')
    {
        chars[index++] = count;
    }

    for (auto var : chars)

    {
        cout << var;
    }
}

int compress2(vector<char> &chars)
{
    int count = 1, index = 0;
    int i = 0, j = i + 1;

    while (j < chars.size())
    {
        if (chars[i] == chars[j])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            chars[index++] = chars[i];

            if (count > 1)
            {
                int start = index;
                // string cnt = to_string(count);
                while (count)
                {
                    chars[index++] = (count % 10) + '0';
                    count /= 10;
                }

                reverse(chars.begin() + start, chars.begin() + index);
            }

            count = 1;
            i++;
            j++;
        }
    }

    chars[index++] = chars[i];
    if (count > 1)
    {
        int start = index;
        // string cnt = to_string(count);
        while (count)
        {
            chars[index++] = (count % 10) + '0';
            count /= 10;
        }

        reverse(chars.begin() + start, chars.begin() + index);
    }

    for (int k = 0; k < index; k++)
    {
        cout << chars[k];
    }
    cout << endl;

    return index;
}
int main(int argc, char const *argv[])
{

    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int size = compress2(chars);

    cout << size << '\n';

    return 0;
}
