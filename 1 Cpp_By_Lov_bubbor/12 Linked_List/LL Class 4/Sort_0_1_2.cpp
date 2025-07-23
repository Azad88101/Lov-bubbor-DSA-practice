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

// Linked list print karne wali function
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

void sort(node *&head)
{
    if (head == NULL)
    {
        cout << "LL  is empty";
        return;
    }
    node *curr = head;
    int zeroes = 0;
    int ones = 0;
    int twos = 0;
    while (curr != NULL)
    {
        if (curr->data == 0)
            zeroes++;
        if (curr->data == 1)
            ones++;
        if (curr->data == 2)
            twos++;
        curr = curr->next;
    }

    node *temp = head;

    while (zeroes--)
    {
        temp->data = 0;
        temp = temp->next;
    }

    while (ones--)
    {
        temp->data = 1;
        temp = temp->next;
    }
    while (twos--)
    {
        temp->data = 2;
        temp = temp->next;
    }
}

void sort2(node *&head)
{
    if (head == NULL)
    {
        cout << "LL  is empty";
        return;
    }
    node *curr = head;
    node *zeroHead = new node(-1);
    node *zeroTail = zeroHead;

    node *oneHead = new node(-1);
    node *oneTail = oneHead;

    node *twoHead = new node(-1);
    node *twoTail = twoHead;
    while (curr != NULL)
    {
        if (curr->data == 1)
        {
            oneTail->next = curr;
            oneTail = oneTail->next;
        }

        if (curr->data == 0)
        {
            zeroTail->next = curr;
            zeroTail = zeroTail->next;
        }

        if (curr->data == 2)
        {
            twoTail->next = curr;
            twoTail = twoTail->next;
        }

        curr = curr->next;
    }

    // zeroTail->next = oneHead;
    // oneTail->next = twoHead;
    // node *temp = zeroHead;
    // node *prev = NULL;

    zeroTail->next = oneHead->next ? oneHead->next : twoHead->next;
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;
}

int main(int argc, char const *argv[])
{
    // node *head = NULL;
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(2);
    head->next->next->next = new node(2);
    head->next->next->next->next = new node(1);
    head->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next->next = new node(1);
    head->next->next->next->next->next->next->next->next = new node(2);

    // printll(head);

    // node *newhead = sort(head);

    // printll(newhead);
    // in this i am changing the vlue intead of inplaces swap;
    // in this i am doing overwrite
    //    sort(head);
    // printll(head);

    /// sort ka method two

    cout << "Original List:\n";
    printll(head);

    sort2(head);

    cout << "Sorted List (0s, 1s, 2s):\n";
    printll(head);

    return 0;
}
