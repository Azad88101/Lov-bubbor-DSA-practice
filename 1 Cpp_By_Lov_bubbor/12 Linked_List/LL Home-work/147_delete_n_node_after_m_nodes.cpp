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

node *delete_M_Nodes(node *head, int n, int m)
{
    

    node *current = head;

    while (current != NULL)
    {
        // Skip m nodes
        for (int i = 1; i < m && current != NULL; i++)
        {
            current = current->next;
        }

        // If we reached end, break
        if (current == NULL)
            break;

        // Start deletion from current->next
        node *temp = current->next;

        for (int i = 0; i < n && temp != NULL; i++)
        {
            node *toDelete = temp;
            temp = temp->next;
            delete toDelete;
        }

        // Link remaining list
        current->next = temp;

        // Move current pointer forward
        current = temp;
    }

    return head;
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
    insertAtEnd(head1, tail1, 6);
    insertAtEnd(head1, tail1, 7);
    insertAtEnd(head1, tail1, 8);

    printll(head1);

    node *newhead = delete_M_Nodes(head1, 1, 2);

    printll(newhead);
    return 0;
}
