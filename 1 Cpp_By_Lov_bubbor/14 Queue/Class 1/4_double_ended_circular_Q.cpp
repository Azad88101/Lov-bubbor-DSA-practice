#include <iostream>
using namespace std;

class deque
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    deque(int s)
    {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void Push_back(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear + 1 == front))
        {
            cout << "Q is Full\n";
            return;
        }
        if (front == -1)
            front = rear = 0;

        else if (rear == size - 1 && front != 0)
            rear = 0;
        else
            rear++;

        arr[rear] = data;
    }

    void Push_front(int data)
    {

        if ((front == 0 && rear == size - 1) || (rear + 1 == front))
        {
            cout << "Q is Full\n";
            return;
        }

        if (front == -1)
            front = rear = 0;
        else if (front == 0)

            front = size - 1;
        else
            front--;
        arr[front] = data;
    }

    void Pop_back()
    {
        if (front == -1) // Empty
        {
            cout << "Q is Empty\n";
            return;
        }

        if (front == rear)
            front = rear = -1;
        else if (rear == 0)
            rear = size - 1;
        else
            rear--;
    }

    void Pop_front()
    {
        if (front == -1) // Empty
        {
            cout << "Q is Empty\n";
            return;
        }

        if (front == rear)
            front = rear = -1;
        else if (front == size - 1)
            front = 0;
        else
            front++;
    }
    void Display()
    {
        if (front == -1)
        {
            cout << "Q is Empty\n";
            return;
        }

        if (rear >= front) // No wrap
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else // Wrapped around
        {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    deque dq(5);
    dq.Push_back(10);
    dq.Push_back(20);
    dq.Push_front(5);
    dq.Push_front(5);
    dq.Display();
    dq.Pop_front();
    dq.Pop_back();
    dq.Display();
    dq.Pop_front();
    dq.Display();
}
