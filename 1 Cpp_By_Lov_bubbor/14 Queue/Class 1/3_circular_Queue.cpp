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
        cout << "[DEBUG] Queue created with size " << size << "\n";
    }

    bool isFull()
    {
        return (rear == size - 1 && front == 0) || (rear == front - 1);
    }
    void push(int data)
    {
        if (isFull())
        {
            cout << "Ques is full \n";
            return;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
    }

    void pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Ques is EMPTY \n";
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }

        else if (front == size - 1)
        {
            front = 0;
        }
        front++;
    }

    int getfront()
    {
        cout << "[DEBUG] Getting front element...\n";
        if (rear == front)
        {
            cout << "[DEBUG] Queue is EMPTY.\n";
            return -1;
        }
        cout << "[DEBUG] Front element is " << arr[front] << "\n";
        return arr[front];
    }

    int getSize()
    {
        return rear - front;
    }

    bool isEmpty()
    {
        return front == rear;
    }
};

int main()
{
    Q q(3);

    q.pop();
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "total size " << q.getSize() << endl;

    q.push(4);

    cout << q.isEmpty() << endl;

    q.getfront();
    q.pop();
    q.getfront();

    q.pop();
    cout << "total size " << q.getSize() << endl;

    q.pop();

    q.push(10);
    q.push(50);
    q.push(70);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << q.isEmpty() << endl;

    return 0;
}
