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

    ~deque()
    {
        delete[] arr;
    }

    void Push_back(int data)
    {
        // circ q
        //  if ((rear == size - 1 && front ==0)||rear==front-1)
        // {
        //       cout << "Q is Full\n";
        // return;
        // }

        if (rear == size - 1)
        {
            cout << "Q is Full\n";
            return;
        }

        if (front == -1)
        {
            front = rear = 0;
        }
        // for cilcular q
        // else if (rear == size - 1 && front !=0)
        // {
        //     rear = 0;
        // }
        else
        {
            rear++;
        }
        arr[rear] = data;
    }

    void Push_front(int data)
    {

        // circ q
        //  if (rear == size - 1 && front ==0)
        // {
        //       cout << "Q is Full\n";
        // return;
        // }
        if (front == 0)
        {
            cout << "No space at front\n";
            return;
        }
        if (front == -1)
        {
            front = rear = 0;
        }

        // else if (rear != size - 1 && front ==0)
        // {
        //    front =size-1
        // }
        else
        {
            front--;
        }
        arr[front] = data;
    }

    void Pop_back()
    {
        if (front == -1)
        {
            cout << "Q is Empty\n";
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }

        // circu q
        // else if(rear==0){
        //     rear=size-1;
        // }
        else
        {
            rear--;
        }
    }

    void Pop_front()
    {
        if (front == -1)
        {
            cout << "Q is Empty\n";
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        // circu q
        // else if(front==size-1){
        //     front=0;
        // }
        else
        {
            front++;
        }
    }

    void Display()
    {
        if (front == -1)
        {
            cout << "Q is Empty\n";
            return;
        }
        for (int i = front; i <= rear; i++)
        {
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
    dq.Display();

    dq.Pop_front();
    dq.Pop_back();

    dq.Pop_front();
    dq.Pop_back();
    dq.Display();
}
