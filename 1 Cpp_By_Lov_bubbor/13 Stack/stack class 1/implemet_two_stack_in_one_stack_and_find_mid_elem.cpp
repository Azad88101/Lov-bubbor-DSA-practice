#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int *arr;
    int top1;
    int top2;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int v)
    {
        if (top2 - top1 > 1)
        {
            arr[++top1] = v;
        }
        else
        {
            cout << "Stack-1 overflow\n";
        }
    }

    void push2(int v)
    {
        if (top2 - top1 > 1)
        {
            arr[--top2] = v;
        }
        else
        {
            cout << "Stack-2 overflow\n";
        }
    }

    void pop1()
    {
        if (top1 >= 0)
        {
            arr[top1] = 0;
            top1--;
        }
        else
        {
            cout << "Stack-1 underflow\n";
        }
    }

    void pop2()
    {
        if (top2 < size)
        {
            arr[top2] = 0;

            top2++;
        }
        else
        {
            cout << "Stack-2 underflow\n";
        }
    }

    void print()
    {
        cout << "Top1: " << top1 << ", Top2: " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n----------------------\n";
    }

    ~Stack()
    {
        delete[] arr;
    }

    int getSize()
    {
        if (top1 < 0)
        {
            cout << "underflow\n";
        }
        return top1 + 1;
    }

    int getTop()
    {
        if (top1 < 0)
        {
            cout << "underflow\n";
            return -1;
        }
        else if (top1 > size)
        {
            cout << "overflow\n";
            return -1;
        }
        return arr[top1];
    }
};

// int getMidELem(Stack s)
// {
//     int len = s.getSize();
//     int i = 0;
//     if (len % 2 == 0)
//     {

//         while (i < len / 2)
//         {
//             s.pop1();
//             i++;
//         }
//     }
//     else
//     {

//         while (i < ((len / 2) + 1))
//         {
//             s.pop1();

//             i++;
//         }
//     }
//     return s.getTop();
// }

int getMidELem(Stack s)
{
    int len = s.getSize();

    if (len == 0)
    {
        cout << "this is empty stack\n";
        return -1;
    }
    int mid = len / 2;

    // Pop only till mid - 1
    for (int i = 0; i < mid; i++)
    {
        s.pop1();
    }

    return s.getTop(); // Top now holds the middle element
}

int main()
{
    Stack s(10);

    s.print(); // Optional debug print

    cout << "Size of Stack 1: " << s.getSize() << endl;
    int mid = getMidELem(s);
    if (mid != -1)
        cout << "Middle element: " << mid << endl;

    return 0;
}
