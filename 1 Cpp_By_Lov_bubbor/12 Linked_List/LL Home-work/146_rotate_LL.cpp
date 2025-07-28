#include <iostream>
using namespace std;

///////// easy 
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

node *Rotate(node *&head, int k)
{

    if (!head)
        return 0;
    int len = length(head);
    int c = k % len;
    if (c == 0)
        return head;

    int i = 0;
    int actlen = len - c - 1;
    node *temp = head;
    while (i < actlen)
    {
        temp = temp->next;
        i++;
    }

    node *newHead = temp->next;
    temp->next = NULL;

    node *temp2 = newHead;
    while (temp2->next)
    {
        temp2 = temp2->next;
    }
    temp2->next = head;

    return newHead;
}
int main(int argc, char const *argv[])
{

    node *head1 = NULL;
    node *tail1 = NULL;

    insertAtEnd(head1, tail1, 1);
    insertAtEnd(head1, tail1, 2);
    insertAtEnd(head1, tail1, 3);
    insertAtEnd(head1, tail1, 4);
    insertAtEnd(head1, tail1, 5);

    printll(head1);

    node *newhead = Rotate(head1, 2);
    printll(newhead);
    return 0;
}
