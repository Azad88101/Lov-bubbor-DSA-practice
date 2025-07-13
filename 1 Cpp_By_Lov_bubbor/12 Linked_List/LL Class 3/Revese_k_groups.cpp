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

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int findLen(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void InsertAtPosition(Node *&head, int data, int pos = 1)
{
    int len = findLen(head);

    if (pos <= 0 || pos > len + 1)
    {
        cout << "invalid position" << endl;
        return;
    }

    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    if (pos == len + 1)
    {
        insertAtEnd(head, data);
        return;
    }

    Node *newNode = new Node(data);
    Node *temp = head;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node *reverKGroups(Node *head, int k)
{
    if (head == NULL || k <= 1)
        return head;

    Node *temp = head;
    int count = findLen(head);
    if (count < k)
    {
        // Less than k nodes, do not reverse
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    int i = 0;
    while (i < k && curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        i++;
    }

    if (next != NULL)
    {
        head->next = reverKGroups(next, k);
    }

    return prev;
}

int main()
{
    Node *head = NULL;

    InsertAtPosition(head, 10);    // 10
    InsertAtPosition(head, 20, 2); // 10 -> 20
    InsertAtPosition(head, 30, 3); // 10 -> 20 -> 30
    InsertAtPosition(head, 25, 3); // 10 -> 20 -> 25 -> 30
    InsertAtPosition(head, 5, 1);  // 5 -> 10 -> 20 -> 25 -> 30
    InsertAtPosition(head, 50, 6); // 5 -> 10 -> 20 -> 25 -> 30 -> 50
    InsertAtPosition(head, 60, 8); // invalid
    InsertAtPosition(head, 30, 3); // invalid

    InsertAtPosition(head, 0);
    printList(head);
    cout << "Length of linked list: " << findLen(head) << endl;

    cout << "revrsedd " << endl;

    head = reverKGroups(head, 5);
    printList(head);

    return 0;
}
