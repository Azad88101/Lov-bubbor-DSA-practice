#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void InsertAtPosition(Node *&head, Node *&tail, int data, int pos = 0)
{

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        if (tail == NULL)
            tail = newNode;
        return;
    }
    if (pos == 0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        if (tail == NULL)
            tail = newNode;
        return;
    }

    int c = 0;
    Node *temp = head;
    while (c < pos - 1 && temp != NULL)
    {
        temp = temp->next;
        c++;
    }

    if (temp == NULL)
    {
        cout << "Position out of bounds." << endl;
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;

    if (newNode->next == NULL)
        tail = newNode;
}

void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtPosition(head, tail, 8); // 2

    InsertAtPosition(head, tail, 2, 1);     // 2
    InsertAtPosition(head, tail, 12,2);    // 12 2
    InsertAtPosition(head, tail, 1832, 1);  // 12 1832 2
    InsertAtPosition(head, tail, 123, 2);   // 12 1832 123 2
    InsertAtPosition(head, tail, 1323, 3);  // 12 1832 123 1323 2
    InsertAtPosition(head, tail, 1213, 4);  // 12 1832 123 1323 1213 2
    InsertAtPosition(head, tail, 212, 5);   // 12 1832 123 1323 1213 212 2
    InsertAtPosition(head, tail, 12312, 6); // 12 1832 123 1323 1213 212 12312 2
    InsertAtPosition(head, tail, 1231, 7);  // 12 1832 123 1323 1213 212 12312 1231 2
    InsertAtPosition(head, tail, 5, 0);     // 5 12 1832 123 1323 1213 212 12312 1231 2
    InsertAtPosition(head, tail, 99, 3);    // Insert at position 10 if valid

    Print(head);

    return 0;
}
