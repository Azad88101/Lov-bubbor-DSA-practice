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
    ~node() {}
};

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

int findLen(node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

void InsertAtPosition(node *&head, node *&tail, int data, int pos = 0)
{
    if (pos == 0)
    {
        InsertAtHead(head, tail, data);
        return;
    }
    int len = findLen(head);
    if (pos == len)
    {
        insertAtEnd(head, tail, data);
        return;
    }
    if (pos > len)
    {
        cout << "Position out of bounds.\n";
        return;
    }
    node *temp = head;
    for (int i = 0; i < pos - 1; i++)
        temp = temp->next;
    node *newNode = new node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    if (newNode->next == NULL)
        tail = newNode;
}

void Print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void DeleteHead(node *&head)
{
    if (head == NULL)
    {
        cout << "Can't delete head, list is empty.\n";
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}

void DeleteTail(node *&head, node *&tail)
{
    if (head == NULL)
    {
        cout << "Can't delete tail, list is empty.\n";
        return;
    }
    if (head == tail)
    {
        delete head;
        head = tail = NULL;
        return;
    }
    node *temp = head;
    while (temp->next != tail)
        temp = temp->next;
    delete tail;
    temp->next = NULL;
    tail = temp;
}

void DeleteAPos(node *&head, node *&tail, int pos = 0)
{
    if (head == NULL)
    {
        cout << "Can't delete, list is empty.\n";
        return;
    }
    int len = findLen(head);
    if (pos < 0 || pos >= len)
    {
        cout << "Position out of bounds.\n";
        return;
    }
    if (head == tail)
    {
        delete head;
        head = tail = NULL;
        return;
    }
    if (pos == 0)
    {
        DeleteHead(head);
        if (head == NULL)
            tail = NULL;
        return;
    }
    if (pos == len)
    {
        DeleteTail(head, tail);
        return;
    }
    node *temp = head;
    for (int i = 0; i < pos - 1; i++)
        temp = temp->next;
    node *toDelete = temp->next;
    temp->next = toDelete->next;
    if (temp->next == NULL)
        tail = temp;
    delete toDelete;
}

int main()
{
    node *head = NULL, *tail = NULL;
    InsertAtPosition(head, tail, 9);
    InsertAtPosition(head, tail, 9, 1);
    InsertAtPosition(head, tail, 3, 1);
    InsertAtPosition(head, tail, 22, 1);
    InsertAtPosition(head, tail, 778, 4);
    InsertAtPosition(head, tail, 872, 2);
    InsertAtPosition(head, tail, 982, 5);
    insertAtEnd(head, tail, 98);
    InsertAtHead(head, tail, 98);

    Print(head); // Expected: 98 9 22 872 3 9 982 778 98

    DeleteHead(head);
    Print(head);
    DeleteTail(head, tail);
    Print(head);
    DeleteTail(head, tail);
    Print(head);
    DeleteHead(head);
    Print(head);
    // DeleteAPos(head, tail, 4);
    DeleteAPos(head, tail, 2);

    Print(head);

    return 0;
}
