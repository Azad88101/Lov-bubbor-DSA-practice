#include <iostream>
using namespace std;

// class Stack
// {
// public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int size)
//     {
//         arr = new int[size];
//         this->size = size;
//         top = -1;
//     }

//     void push(int v)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = v;
//         }
//         else
//         {
//             cout << "stack overflow";
//         }
//         return;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "stack is empty";
//             return;
//         }
//         else
//         {
//             top--;
//         }
//     }

//     int getTop()
//     {
//         if (top == -1)
//         {
//             cout << "stack is empty";
//         }
//         else
//         {
//             return arr[top];
//         }
//     }
//     bool empty(int v)
//     {
//         if (top == -1)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }

//     int size()
//     {
//         return top;
//     }
// };

int main(int argc, char const *argv[])
{

    ///////////////////////                by  using STL ka  stack
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    //  stack<int> ct;
    // while (!st.empty())
    // {
    //     cout << st.top()<<" ";
    //     ct.push(st.top());
    //     st.pop();
    // }

    ///    we will create own staack using array


    return 0;
}
