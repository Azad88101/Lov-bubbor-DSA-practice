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

node *findIntersection(node *head1, node *head2)
{
    int len1 = 0, len2 = 0;
    node *temp1 = head1;
    node *temp2 = head2;

    while (temp1)
    {
        len1++;
        temp1 = temp1->next;
    }
    while (temp2)
    {
        len2++;
        temp2 = temp2->next;
    }

    temp1 = head1;
    temp2 = head2;

    if (len1 > len2)
    {
        for (int i = 0; i < len1 - len2; i++)
            temp1 = temp1->next;
    }
    else
    {
        for (int i = 0; i < len2 - len1; i++)
            temp2 = temp2->next;
    }

    while (temp1 && temp2)
    {
        if (temp1 == temp2)
            return temp1;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return NULL; // no intersection
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

    node *head2 = NULL;

    node *tail2 = NULL;

    insertAtEnd(head2, tail2, 1);
    insertAtEnd(head2, tail2, 2);
    insertAtEnd(head2, tail2, 3);
    head2->next->next->next = head1->next->next;

    printll(head1);
    printll(head2);

    node *ans = findIntersection(head1, head2);

    cout << "\nans  " << ans->data;
    return 0;
}
