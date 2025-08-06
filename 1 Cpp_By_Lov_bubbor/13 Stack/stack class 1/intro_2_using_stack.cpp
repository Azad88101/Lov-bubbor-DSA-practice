#include <iostream>
#include <stack>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int v)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = v;
        }
        else
        {
            cout << "stack overflow\n";
        }
        return;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty\n";
            return;
        }
        else
        {
            top--;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "stack is empty\n";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    bool empty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int getSize()
    {
        return top + 1;
    }
};

int main(int argc, char const *argv[])
{

    Stack s(7);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(6);
    s.push(5);
    s.push(7);
    s.push(8);

    cout << s.getSize() << "\n";

    while (!s.empty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << "\n";

    cout << s.getSize() << '\n';
    s.pop();

    return 0;
}
