#include <iostream>
#include <unordered_map>
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
        newNode->next = head;
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

void insertAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
}

void printList(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    Node *temp = head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head && temp != NULL);
    cout << "HEAD\n";
}
/////////////////// 111111111111111111111111111111111111111111111111111111
///  check o(n) usng temp variable

bool check1(Node *&head)
{
    if (head == NULL)
        return false;

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    return temp == head;
}

//// approach 222222222222222222222
// using map

bool check2(Node *&head)
{
    unordered_map<Node *, bool> mp;
    Node *temp = head;
    while (temp != NULL)
    {
        if (mp[temp])
        {
            return true;
        }
        else
        {
            mp[temp] = true;
        }
        temp = temp->next;
    }
    return false;
}

///////////// 3333333333333333333333333333333333333333333333333333333
///////////    using slow and fast pointer
bool check3(Node *&head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
            // break;
        }
    }
    return slow == fast ? true : false;
}

int main()
{
    Node *head = new Node(1);

    // insertAtHead(head, 10);
    // insertAtHead(head, 20);
    // insertAtTail(head, 30);
    // insertAtTail(head, 40);
    // insertAtHead(head, 50);
    // insertAtTail(head, 60);
    // insertAtTail(head, 70);

    Node *fir = new Node(12);
    Node *sec = new Node(13);
    Node *th = new Node(14);
    Node *fo = new Node(15);
    Node *fi = new Node(16);
    Node *si = new Node(17);
    Node *se = new Node(18);
    head->next = fir;
    fir->next = sec;
    sec->next = th;
    th->next = fo;
    fo->next = fi;
    fi->next = si;
    si->next = se;
    se->next = head;

    printList(head);

    cout << (check1(head) ? "The linked list is circular.\n" : "The linked list is not circular.\n");

    cout << (check2(head) ? "The linked list is circular.\n" : "The linked list is not circular.\n");

    cout << (check3(head) ? "The linked list is circular.\n" : "The linked list is not circular.\n");

    return 0;
}
