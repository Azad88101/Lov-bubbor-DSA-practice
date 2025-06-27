#include <iostream>
#include <vector>

using namespace std;

int isPos(vector<int> books, int mid, int m)
{
    int c = 1;
    int pageSum = 0;
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i] > mid)
            return false;

        if (pageSum + books[i] > mid)
        {
            c++;
            pageSum = books[i];

            if (c > m)
            {
                return false;
            }
        }
        else
        {

            pageSum += books[i];
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    vector<int> books = {10, 20, 30, 40};
    int m = 2;
    int s = 0;
    int e = 0;
    int ans = -1;
    for (auto v : books)
    {
        e += v;
    }

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPos(books, mid, m))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
