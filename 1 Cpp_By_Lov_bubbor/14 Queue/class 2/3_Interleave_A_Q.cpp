#include <iostream>
#include <queue>
using namespace std;

void printQ(queue<int> Q)
{

    cout << "printing the Q \n";
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    cout << endl;
}
void interleave(queue<int> &MainQ)
{
    if (MainQ.empty())
        return;
    printQ(MainQ);
    queue<int> temp1;
    int i = 0;
    cout << "temp 1\n";
    int s = MainQ.size() / 2;
    while (i < s)
    {
        temp1.push(MainQ.front());
        MainQ.pop();
        i++;
    }

    printQ(temp1);
    queue<int> temp2;

    cout << "temp 2\n";
    while (!MainQ.empty())
    {
        temp2.push(MainQ.front());
        MainQ.pop();
    }

    printQ(temp2);

    while (!temp1.empty() && !temp2.empty())
    {
        MainQ.push(temp1.front());
        MainQ.push(temp2.front());
        temp1.pop();
        temp2.pop();
    }

    while (!temp1.empty())
    {
        MainQ.push(temp1.front());
        temp1.pop();
    }
    while (!temp2.empty())
    {
        MainQ.push(temp2.front());
        temp2.pop();
    }
    printQ(MainQ);
}
int main(int argc, char const *argv[])
{
    queue<int> MainQ;
    // MainQ.push(10);
    // MainQ.push(20);
    // MainQ.push(30);
    // MainQ.push(40);
    // MainQ.push(50);
    // MainQ.push(60);
    // MainQ.push(70);
    // MainQ.push(80);

    interleave(MainQ);
    return 0;
}

