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

void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    {
        tail = newNode;
    }
}

void insertAtEnd(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        insertAtHead(head, tail, data);
        return;
    }
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

int findLength(Node *head)
{
    int length = 0;
    while (head != NULL)
    {
        length++;
        head = head->next;
    }
    return length;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int pos = 0)
{
    int length = findLength(head);
    if (pos < 0 || pos > length)
    {
        cout << "Position out of bounds.\n";
        return;
    }
    if (pos == 0)
    {
        insertAtHead(head, tail, data);
    }
    else if (pos == length)
    {
        insertAtEnd(head, tail, data);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Function to reverse k nodes in the linked list
Node *reverseKGroups(Node *head, int k)
{
    if (!head || k <= 1)
        return head;

    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    int count = 0;

    // Check if there are at least k nodes left
    Node *temp = head;
    for (int i = 0; i < k; ++i)
    {
        if (!temp)
            return head;
        temp = temp->next;
    }

    // Reverse first k nodes
    while (curr && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recursively call for the rest of the list
    if (next)
    {
        head->next = reverseKGroups(next, k);
    }

    return prev;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Clean, clear test case
    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtEnd(head, tail, 30);
    insertAtEnd(head, tail, 40);
    insertAtEnd(head, tail, 50);
    insertAtEnd(head, tail, 60);
    insertAtEnd(head, tail, 70);
    insertAtEnd(head, tail, 80);

    cout << "Original list:\n";
    printList(head);

    int k = 3;
    head = reverseKGroups(head, k);

    cout << "\nList after reversing in groups of " << k << ":\n";
    printList(head);

    return 0;
}
