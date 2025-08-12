#include <iostream>
using namespace std;

class Q
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Q(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    ~Q()
    { // destructor to avoid memory leak
        delete[] arr;
    }

    void push(int val)
    {
        if (rear == size)
        { // fixed bound check
            cout << "Queue is full\n";
        }
        else
        {
            arr[rear] = val;
            rear++;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is empty\n";
        }
        else
        {
            front++;
        }
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
        return rear - front;
    }
};

int main()
{
    Q q(3);
    q.push(10);
 
    cout<<q.getfront();
    return 0;
}
