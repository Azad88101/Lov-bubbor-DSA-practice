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
        next = NULL; // using NULL instead of nullptr
    }

    ~Node() {}
};

// Insert at the beginning
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

// Insert at the end
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

// Find length of linked list
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

// Insert at a specific position
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

// Print linked list
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Delete head node
void deleteHead(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "List is empty, cannot delete head.\n";
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    if (head == NULL)
    {
        tail = NULL;
    }
}

// Delete tail node
void deleteTail(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "List is empty, cannot delete tail.\n";
        return;
    }
    if (head == tail)
    {
        delete head;
        head = tail = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    delete tail;
    temp->next = NULL;
    tail = temp;
}

// Delete node at a specific position
void deleteAtPosition(Node *&head, Node *&tail, int pos)
{

    if (head == NULL)
    {
        cout << "LL is  empty\n";
        return;
    }
    int length = findLength(head);
    if (pos < 0 || pos >= length)
    {
        cout << "Position out of bounds.\n";
        return;
    }
    if (pos == 0)
    {
        deleteHead(head, tail);
    }
    else if (pos == length - 1)
    {
        deleteTail(head, tail);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        Node *toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }
}

// Clear the entire linked list
void clearList(Node *&head, Node *&tail)
{
    while (head != NULL)
    {
        deleteHead(head, tail);
    }
}

// Recursive reverse using your approach, using NULL
void reverseLinkedList(Node *&prev, Node *&curr, Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        cout << "LL is  empty\n";
        return;
    }
    if (curr == NULL)
    {
        Node *temp = head;
        // head = tail;
        tail = temp;
        head = prev;
        return;
    }
    Node *next = curr->next;
    curr->next = prev;
    reverseLinkedList(curr, next, head, tail);
}

void ReverseLoop(Node *&head)
{

    if (head == NULL)
    {
        cout << "LL is  empty\n";
        return;
    }
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *next = curr->next;

        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int FindMidElem(Node *&head)
{

    if (head == NULL)
    {
        cout << "LL is  empty\n";
        return 0;
    }
    int len = findLength(head);
    int pos = len / 2;
    if (len % 2 != 0)
    {
        pos += 1;
    }
    Node *temp = head;
    for (int i = 1; i < pos; i++) // Move pos - 1 steps
    {
        temp = temp->next;
    }

    return temp->data;
}

Node *FindMidNodeUsingFastSlow(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is  empty";
        return head;
    }

    if (head->next == NULL)
    {
        // cout<<"LL is  empty";
        return head;
    }
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtEnd(head, tail, 30);
    insertAtEnd(head, tail, 40);
    insertAtEnd(head, tail, 50);

    cout << "Original Linked List:\n";
    printList(head);

    cout << "Reversing list recursively...\n";
    Node *prev = NULL;
    reverseLinkedList(prev, head, head, tail);
    printList(head);

    cout << "Reversing list Iteratively...\n";
    ReverseLoop(head);
    printList(head);

    cout << "Mid element using loop method: ";
    cout << FindMidElem(head) << endl;

    cout << "Mid element using fast-slow pointer: ";
    Node *midNode = FindMidNodeUsingFastSlow(head);
    if (midNode != NULL)
    {
        cout << midNode->data << endl;
    }
    else
    {
        cout << "LL is empty\n";
    }

    return 0;
}
