#include <iostream>
using namespace std;

class Q
{
    int *arr;
    int front;
    int rear;
    int size; // actual array size (capacity + 1 for circular)

public:
    Q(int capacity)
    {
        size = capacity + 1; // +1 for circular queue logic
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    ~Q()
    {
        delete[] arr;
    }

    void push(int val)
    {
        if ((rear + 1) % size == front)
        {
            cout << "Queue is full\n";
            return;
        }
        arr[rear] = val;
        rear = (rear + 1) % size;
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is empty\n";
            return;
        }
        front = (front + 1) % size;
    }

    int getfront()
    {
        if (front == rear)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    bool isEmpty()
    {
        return front == rear;
    }

    int getSize()
    {
        return (rear - front + size) % size;
    }
};

int main()
{
    Q q(3); // capacity of 3 elements

    q.push(10);
    q.push(20);
    q.push(30); // should be full here
    q.push(40); // won't insert

    cout << q.getfront() << "\n"; // 10
    q.pop();
    cout << q.getfront() << "\n"; // 20

    q.pop();
    cout << q.getfront() << "\n"; // 20
    q.pop();
    cout << q.getfront() << "\n"; // 20
    return 0;
}
