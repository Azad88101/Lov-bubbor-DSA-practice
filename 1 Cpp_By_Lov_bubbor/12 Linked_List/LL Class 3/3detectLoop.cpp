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

// Linked list ke end me node insert karne wali function
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

// Linked list ke start me node insert karne wali function
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

// Floyd's Cycle detection algorithm se loop detect karenge aur us loop ko tod denge
bool findCircular(Node *&head, Node *&ans)
{
    bool found = false;
    Node *slow = head;
    Node *fast = head;

    // Pehle detect karte hai ki loop hai ya nahi
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            found = true;
            break;
        }
    }

    // Agar loop mil gaya to uske starting point tak pohchte hai
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Loop ka starting point store kar lete hai ans me
    if (slow == fast)
    {
        ans = slow;
    }

    // Loop ko todna hai
    Node *temp = head;
    while (temp->next != slow)
    {
        temp = temp->next;
    }
    temp->next = NULL; // Loop tod diya

    return found;
}

// Linked list print karne wali function
void printList(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main(int argc, char const *argv[])
{
    // Nodes banate hai manually
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *four = new Node(4);
    Node *five = new Node(5);
    Node *six = new Node(6);
    Node *seven = new Node(7);
    Node *eight = new Node(8);
    Node *nine = new Node(9);
    Node *ten = new Node(10);

    // Nodes ko link karte hai
    head->next = second;
    second->next = third;
    third->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next = eight;
    eight->next = nine;
    nine->next = ten;
    ten->next = five; // Yaha pe loop create kar diya hai (10 -> 5)

    Node *ans = NULL;

    // Loop detect karne aur todne ka function call karte hai
    cout << findCircular(head, ans) << endl; // Agar loop mila to 1 print karega, warna 0
    cout << ans->data << endl; // Loop start hone wali node ka data print karega

    // Ab linked list ko print karte hai
    printList(head);

    return 0;
}
