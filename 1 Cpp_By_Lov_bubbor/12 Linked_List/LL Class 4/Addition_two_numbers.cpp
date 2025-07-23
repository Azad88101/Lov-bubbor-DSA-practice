#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void printll(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null\n";
}

void reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;

    while (curr != NULL)
    {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

// node *Adding(node *&head, node *&sechead)
// {
//     node *temp1 = head;
//     node *temp2 = sechead;

//     int carry = 0;

//     node *newhead = new node(-1);
//     node *newtail = newhead;
//     while (temp1 != NULL && temp2 != NULL)
//     {
//         int data1 = temp1->data;
//         int data2 = temp2->data;

//         int val = (data1 + data2) % 10;
//         val = carry + val;
//         carry = (data1 + data2) / 10;

//         node *newnode = new node(val);
//         newtail->next = newnode;
//         newtail = newtail->next;

//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }

//     while (temp1 != NULL)
//     {

//         newtail->next = temp1;
//         newtail = newtail->next;
//         temp1 = temp1->next;
//     }

//     while (temp2 != NULL)
//     {

//         newtail->next = temp2;
//         newtail = newtail->next;
//         temp2 = temp2->next;
//     }

//     return newhead->next;
// }
node *Adding(node *&head, node *&sechead)
{
    node *temp1 = head;
    node *temp2 = sechead;

    int carry = 0;

    node *newhead = new node(-1); // dummy
    node *newtail = newhead;

    while (temp1 != NULL && temp2 != NULL)
    {
        int data1 = temp1->data;
        int data2 = temp2->data;

        int sum = data1 + data2 + carry;
        int val = sum % 10;
        carry = sum / 10;

        node *newnode = new node(val);
        newtail->next = newnode;
        newtail = newtail->next;

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    while (temp1 != NULL)
    {
        int sum = temp1->data + carry;
        int val = sum % 10;
        carry = sum / 10;

        node *newnode = new node(val);
        newtail->next = newnode;
        newtail = newtail->next;

        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
        int sum = temp2->data + carry;
        int val = sum % 10;
        carry = sum / 10;

        node *newnode = new node(val);
        newtail->next = newnode;
        newtail = newtail->next;

        temp2 = temp2->next;
    }

    // If carry is left after both lists are exhausted
    if (carry != 0)
    {
        node *newnode = new node(carry);
        newtail->next = newnode;
        newtail = newtail->next;
    }

    return newhead->next;
}
int main()
{
    node *head = new node(2);
    head->next = new node(3);
    head->next->next = new node(9);
    head->next->next->next = new node(8);
    printll(head); // 2 -> 3 -> 9 -> 8 -> Null

    node *sechead = new node(2);
    sechead->next = new node(4);
    sechead->next->next = new node(9);
    sechead->next->next->next = new node(9);
    printll(sechead); // 2 -> 4 -> 9 -> Null

    cout << "reversed \n";
    reverse(head);
    printll(head); // 8 -> 9 -> 3 -> 2 -> Null

    reverse(sechead);
    printll(sechead); // 9 -> 4 -> 2 -> Null

    cout << "adding \n";
    node *newhead = Adding(head, sechead);

    reverse(newhead);
    printll(newhead);
    return 0;
}
