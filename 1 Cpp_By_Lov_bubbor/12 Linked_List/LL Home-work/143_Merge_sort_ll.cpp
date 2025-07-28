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

//////////////////// 2  2222222222222222222222222222222222222222222222222222222222222
node *mergeTwoLists(node *left, node *right)
{
    if (left == 0)
        return right; // If left list empty, return right
    if (right == 0)
        return left; // If right list empty, return left

    node *ans = new node(-1); // Dummy node with value -1
    node *mptr = ans;         // Pointer to build the merged list

    while (left && right)
    { // While both lists are non-empty
        if (left->data <= right->data)
        {
            mptr->next = left; // Attach left node
            mptr = left;       // Move pointer
            left = left->next; // Move left forward
        }
        else
        {
            mptr->next = right;  // Attach right node
            mptr = right;        // Move pointer
            right = right->next; // Move right forward
        }
    }

    if (left)
    {                      // If left nodes remain
        mptr->next = left; // Attach remaining left list
    }
    if (right)
    {                       // If right nodes remain
        mptr->next = right; // Attach remaining right list
    }

    return ans->next; // Return merged list (skip dummy)
}

node *findMid(node *head)
{

    node *slow = head;
    node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *SortList(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *mid = findMid(head);
    node *leftPart = head;
    node *rightPart = mid->next;
    mid->next = NULL;

    leftPart = SortList(leftPart);
    rightPart = SortList(rightPart);
    node *mergeHead = mergeTwoLists(leftPart, rightPart);
    return mergeHead;
}

int main(int argc, char const *argv[])
{

    node *head = NULL;
    node *tail = NULL;

    insertAtEnd(head, tail, 4);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 5);
    insertAtEnd(head, tail, 4);
    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 5);

    printll(head);
    node *mid = findMid(head);

    printll(mid);

    node *sorted = SortList(head);

    printll(sorted);
    return 0;
}
