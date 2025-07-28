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

int length(node *&head)
{
    node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    return i;
}

void InsertAtHead(node *&head, node *&tail, int data)
{
    node *newNode = new node(data);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
        tail = newNode;
}

void insertAtEnd(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        InsertAtHead(head, tail, data);
        return;
    }
    node *newNode = new node(data);
    tail->next = newNode;
    tail = newNode;
}

node *merge(node *head1, node *head2)
{
    node *t1 = head1;
    node *t2 = head2;

    node *newhead = NULL;
    node *newtail = newhead;

    while (t1 != NULL && t2 != NULL)
    {
        if (t1->data < t2->data)
        {

            insertAtEnd(newhead, newtail, t1->data);
            t1 = t1->next;
        }
        else
        {
            insertAtEnd(newhead, newtail, t2->data);
            t2 = t2->next;
        }
    }

    while (t1 != NULL)
    {
        insertAtEnd(newhead, newtail, t1->data);
        t1 = t1->next;
    }

    while (t2 != NULL)
    {
        insertAtEnd(newhead, newtail, t2->data);
        t2 = t2->next;
    }

    return newhead;
}

//////////////////// 2  2222222222222222222222222222222222222222222222222222222222222

node *mergeTwoLists(node *head1, node *head2)
{
    node *t1 = head1;
    node *t2 = head2;

    node *newhead = NULL;
    node *newtail = NULL;

    while (t1 != NULL && t2 != NULL)
    {
        int val;
        if (t1->data < t2->data)
        {
            val = t1->data;
            t1 = t1->next;
        }
        else
        {
            val = t2->data;
            t2 = t2->next;
        }

        if (newtail == NULL)
        {
            newhead = newtail = new node(val);
        }
        else
        {
            newtail->next = new node(val);
            newtail = newtail->next;
        }
    }

    while (t1 != NULL)
    {
        if (newtail == NULL)
        {
            newhead = newtail = new node(t1->data);
        }
        else
        {
            newtail->next = new node(t1->data);
            newtail = newtail->next;
        }
        t1 = t1->next;
    }

    while (t2 != NULL)
    {
        if (newtail == NULL)
        {
            newhead = newtail = new node(t2->data);
        }
        else
        {
            newtail->next = new node(t2->data);
            newtail = newtail->next;
        }
        t2 = t2->next;
    }

    return newhead;
}

int main(int argc, char const *argv[])
{

    node *head1 = NULL;
    node *tail1 = NULL;

    insertAtEnd(head1, tail1, 1);
    insertAtEnd(head1, tail1, 2);
    // insertAtEnd(head1, tail1, 3);
    insertAtEnd(head1, tail1, 4);
    // insertAtEnd(head1, tail1, 5);

    node *head2 = NULL;

    node *tail2 = NULL;

    insertAtEnd(head2, tail2, 1);
    // insertAtEnd(head2, tail2, 2);
    insertAtEnd(head2, tail2, 3);
    insertAtEnd(head2, tail2, 4);

    printll(head1);
    printll(head2);

    node *newhead = merge(head1, head2);
    printll(newhead);
    return 0;
}
