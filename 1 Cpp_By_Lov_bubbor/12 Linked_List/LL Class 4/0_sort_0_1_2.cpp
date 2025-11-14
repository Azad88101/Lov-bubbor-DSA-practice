#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->next = NULL;
        this->data = data;
    }
};

void insertNode(node *&head, int data)
{

    node *newnode = new node(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return;
}

void insertAtTail(node *&tail, node *curr)
{

    tail->next = curr;
    tail = curr;
}

void sort012(node *&head)
{
    if (head == NULL)
        return;

    node *zerohead = new node(-1);
    node *zeroTail =
        zerohead;
    node *onehead = new node(-1);
    node *oneTail = onehead;

    node *twohead = new node(-1);
    node *twoTail =
        twohead;

    node *curr = head;
    while (curr != NULL)
    {
        int val = curr->data;
        if (val == 0)
        {
            insertAtTail(zeroTail, curr);
        }

        else if (val == 1)
        {
            insertAtTail(oneTail, curr);
        }

        else if (val == 2)
        {
            insertAtTail(twoTail, curr);
        }

        curr = curr->next;
    }

    zeroTail->next = (onehead->next != NULL) ? onehead->next : twohead->next;
    oneTail->next = twohead->next;
    twoTail->next = NULL;
    head = zerohead->next;
}

void printNode(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
    cout << "\n";
}

int main(int argc, char const *argv[])
{
    node *head = NULL;
    insertNode(head, 0);
    insertNode(head, 2);
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 1);
    insertNode(head, 0);
    insertNode(head, 0);
    insertNode(head, 1);
    insertNode(head, 0);
    insertNode(head, 2);
    insertNode(head, 1);
    insertNode(head, 2);

    printNode(head);

    sort012(head);
    printNode(head);
    return 0;
}
