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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
}
int main(int argc, char const *argv[])
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 76);
    insertAtEnd(head, tail, 234);
    insertAtPosition(head, tail, 12, 2);
    insertAtPosition(head, tail, 4);
    insertAtPosition(head, tail, 3, 1);
    insertAtPosition(head, tail, 32, 3);
    insertAtPosition(head, tail, 16, 1);
    // insertAtPosition(head, tail, 16, 1);
    print(head);
    cout << endl;

    //////////////    by using len than finding mid
    int len = findLength(head);
    cout << "Len of linked list " << len << endl;
    // Node *temp = head;
    // int i = 1;
    // len = len % 2 == 0 ? len / 2 : (len / 2) + 1;
    // while (i < len && temp->next != NULL)
    // {
    //     temp = temp->next;
    //     i++;
    // }
    // cout << "temp data mid datta" << temp->data << endl;

    /// next we will use slow and fast approach it can find in one iteration

    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->data;

    return 0;
}
