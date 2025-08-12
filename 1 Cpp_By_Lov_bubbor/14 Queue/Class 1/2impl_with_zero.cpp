#include <iostream>
using namespace std;

class Q
{

public:
    int size;
    int *arr;
    int front;
    int rear;

    Q(int s)
    {
        size = s;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data)
    {
        if (rear >= size)
        {
            cout << " Q is FUll\n";
            return;
        }
        arr[rear] = data;
        rear++;
    }

    void pop()
    {

        if (rear == front)
        {
            cout << " Q is EMPTY \n";
            return;
        }
        front++;
    }

    int getfront()
    {

        if (rear == front)
        {
            cout << " Q is EMPTY \n";
            return -1;
        }
        return arr[front];
    }
};
int main(int argc, char const *argv[])
{

    Q q(3);

    q.pop();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    return 0;
}
