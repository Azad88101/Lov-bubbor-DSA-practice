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

    void push(int data)
    {
        cout << "[DEBUG] Trying to push " << data << "...\n";
        if (rear >= size)
        {
            cout << "[DEBUG] Queue is FULL. Cannot insert " << data << "\n";
            return;
        }
        arr[rear] = data;
        rear++;
        cout << "[DEBUG] Inserted " << data << " at position " << (rear - 1)
             << ". Front: " << front << ", Rear: " << rear << "\n";
    }

    void pop()
    {
        cout << "[DEBUG] Trying to pop...\n";
        if (rear == front)
        {
            cout << "[DEBUG] Queue is EMPTY. Cannot pop.\n";
            return;
        }
        cout << "[DEBUG] Removed element " << arr[front] << " from position " << front << "\n";
        front++;
        cout << "[DEBUG] Front moved to " << front << ", Rear: " << rear << "\n";
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
};

int main()
{
    Q q(3);

    q.pop();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.getfront();
    q.pop();
    q.getfront();

    return 0;
}
