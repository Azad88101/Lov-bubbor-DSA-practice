#include <iostream>
#include <vector>
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
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int data)
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

void printList(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << " NULL " << '\n';
}

Node *reveseKGroups(Node *&head, int k)
{

    if (head == NULL || k <= 1)
        return head;
    Node *temp = head;
    int c = 0;
    while (temp != NULL && c < k)
    {
        temp = temp->next;
        c++;
    }
    if (c < k)
    {
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    c = 0;
    while (c < k)
    {
        next = curr->next;

        curr->next = prev;
        prev = curr;

        curr = next;
        c++;
    }
    if (next != NULL)
    {
        head->next = reveseKGroups(next, k);
    }
    return prev;
}
int main(int argc, char const *argv[])
{
    Node *head = NULL;

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);

    insertAtHead(head, 10);
    insertAtTail(head, 90);
    insertAtTail(head, 60);

    printList(head); // Expected: 20 -> 10 -> 30 -> 40 -> NULL

    head = reveseKGroups(head, 2);
    printList(head);
    return 0;
}
