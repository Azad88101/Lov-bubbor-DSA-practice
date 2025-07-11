// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     Node *prev;
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         prev = NULL;

//         this->data = data;
//         next = NULL;
//     }
// };

// void InsertBeforHead(Node *&head, Node *&tail, int data)
// {
//     Node *newNode = new Node(data);
//     if (head == NULL)
//     {

//         tail = head = newNode;

//         return;
//     }

//     // Node *newNode = new Node(data);
//     newNode->next = head;
//     head->prev = newNode;

//     // newNode->prev = NULL;
//     head = newNode;
//     if (tail == NULL)
//         tail = newNode;
// }

// void InsertAfterHead(Node *&head, Node *&tail, int data)
// {
//     Node *newNode = new Node(data);
//     if (head == NULL)
//     {

//         tail = head = newNode;

//         return;
//     }

//     // Node *newNode = new Node(data);
//     // head = newNode;

//     if (head->next != NULL)
//     {

//         newNode->next = head->next;
//     }
//     else
//     {

//         newNode->next = NULL;
//     }
//     head->next = newNode;
//     newNode->prev = head;
//     // newNode->next = head->next;

//     if (head->next != NULL)
//     {

//         newNode->next = head->next;
//     }
//     else
//     {

//         newNode->next = NULL;
//     }
//     if (tail == NULL)
//     {
//         tail = newNode;
//     }
//     // if(head)
//     // newNode->next = head->next->next;
// }

// int findLen(Node *&head)
// {
//     Node *temp = head;
//     int len = 0;
//     while (temp != NULL)
//     {
//         // cout << temp->data << " ";
//         len++;
//         temp = temp->next;
//     }

//     return len;
// }

// void InsertbeforeTail(Node *&head, Node *&tail, int data)
// {
//     Node *nn = new Node(data);
//     if (head == NULL)
//     {
//         head = tail = nn;

//         return;
//     }

//     if (head == tail)
//     {
//         tail = nn;

//         head->next = tail;
//         tail->prev = head;

//         return;
//     }

//     // tail->prev->next = nn;
//     // nn->prev = tail->prev;
//     // nn->next = tail;
//     // tail->prev = nn;

//     ///////////
//     nn->next = tail;
//     nn->prev = tail->prev;
//     tail->prev->next = nn;
//     tail->prev = nn;
//     return;
// }

// void InsertAfterTail(Node *&head, Node *&tail, int data)
// {
//     Node *nn = new Node(data);
//     if (head == NULL)
//     {
//         head = tail = nn;
//         return;
//     }

//     if (head == tail)
//     {
//         tail = new Node(data);
//         head->prev = NULL;
//         head->next = tail;
//         tail->prev = head;
//         tail->next = NULL;
//         return;
//     }

//     tail->next = nn;
//     nn->prev = tail;
//     // nn->next = NULL;
//     tail = nn;
// }

// void InsertAtPosition(Node *&head, Node *&tail, int data, int pos = 0)
// {

//     if (pos == 0)
//     {
//         InsertBeforHead(head, tail, data);
//         return;
//     }

//     // pos ==len last me insert wala \wala ahndle krlo

//     int len = findLen(head);
//     if (pos < 0 || pos > len)
//     {
//         cout << "Invalid position.\n";
//         return;
//     }

//     if (pos == len)
//     {
//         InsertAfterTail(head, tail, data);
//         return;
//     }

//     Node *temp = head;
//     int c = 0;
//     while (c < pos)
//     {
//         temp = temp->next;
//         c++;
//     }
//     // Node *newNode = new Node(data);
//     // newNode->next = temp->next;
//     // temp->next->prev = newNode;
//     // temp->next = newNode;

//     Node *newNode = new Node(data);
//     newNode->next = temp->next;
//     newNode->prev = temp;
//     temp->next->prev = newNode;
//     temp->next = newNode;
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main()
// {

//     Node *head = NULL;
//     Node *tail = NULL;

//     // insertAfterHead(head, 12);
//     // insertAfterHead(head, 14);
//     // insertAfterHead(head, 2);
//     // insertAfterHead(head, 98);

//     // InsertBeforHead(head, tail, 12);
//     // InsertBeforHead(head, tail, 12123);
//     // InsertBeforHead(head, tail, 423);
//     // InsertBeforHead(head, tail, 1441);
//     // cout << findLen(head);
//     // InsertAtPosition

//     // InsertAtPosition(head, 12);
//     // print(head);
//     // cout << endl;
//     // InsertAtPosition(head, 12123);
//     // print(head);
//     // cout << endl;
//     // InsertAtPosition(head, 423, 1);
//     // print(head);
//     // cout << endl;

//     // InsertAtPosition(head, 1441, 1);
//     // print(head);
//     // cout << endl;

//     // InsertbeforeTail(head, tail, 12);
//     // print(head);
//     // cout << endl;
//     // InsertbeforeTail(head, tail, 14);
//     // print(head);
//     // cout << endl;
//     // InsertbeforeTail(head, tail, 2);
//     // print(head);
//     // cout << endl;
//     // InsertbeforeTail(head, tail, 98);

//     // InsertbeforeTail(head, tail, 12);
//     // InsertbeforeTail(head, tail, 12123);
//     // print(head);
//     // cout << endl;

//     // InsertbeforeTail(head, tail, 423);
//     // InsertbeforeTail(head, tail, 1441);
//     // print(head);
//     // cout << endl;
//     // cout << findLen(head);

//     InsertAfterTail(head, tail, 12);
//     print(head);
//     cout << endl;
//     InsertAfterTail(head, tail, 14);
//     print(head);
//     cout << endl;
//     InsertAfterTail(head, tail, 2);
//     print(head);
//     cout << endl;
//     InsertAfterTail(head, tail, 98);

//     InsertAfterTail(head, tail, 12);
//     InsertAfterTail(head, tail, 12123);
//     print(head);
//     cout << endl;

//     InsertAfterTail(head, tail, 423);
//     InsertAfterTail(head, tail, 1441);
//     print(head);
//     cout << endl;
//     // cout << findLen(head);

//     // InsertAfterTail
//     return 0;
// }

// full debug//////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
    Node(int data)
    {
        prev = NULL;
        this->data = data;
        next = NULL;
    }
};

void InsertBeforeHead(Node *&head, Node *&tail, int data)
{
    cout << "[DEBUG] InsertBeforeHead: " << data << endl;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void InsertAfterHead(Node *&head, Node *&tail, int data)
{
    cout << "[DEBUG] InsertAfterHead: " << data << endl;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    newNode->next = head->next;
    newNode->prev = head;
    if (head->next != NULL)
        head->next->prev = newNode;
    else
        tail = newNode;
    head->next = newNode;
}

void InsertBeforeTail(Node *&head, Node *&tail, int data)
{
    cout << "[DEBUG] InsertBeforeTail: " << data << endl;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    if (head == tail)
    {
        newNode->prev = head;
        head->next = newNode;
        tail = newNode;
        return;
    }
    newNode->next = tail;
    newNode->prev = tail->prev;
    tail->prev->next = newNode;
    tail->prev = newNode;
}

void InsertAfterTail(Node *&head, Node *&tail, int data)
{
    cout << "[DEBUG] InsertAfterTail: " << data << endl;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int findLen(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtPosition(Node *&head, Node *&tail, int data, int pos = 1)
{
    cout << "[DEBUG] InsertAtPosition: " << data << " at position " << pos << endl;
    int len = findLen(head);
    if (pos < 1 || pos > len + 1)
    {
        cout << "Invalid position.\n";
        return;
    }
    if (pos == 1)
    {
        InsertBeforeHead(head, tail, data);
        return;
    }
    if (pos == len + 1)
    {
        InsertAfterTail(head, tail, data);
        return;
    }
    Node *temp = head;
    int c = 1;
    while (c < pos - 1)
    {
        temp = temp->next;
        c++;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void deleteAHead(Node *&head, Node *&tail)
{
    cout << "[DEBUG] deleteAHead\n";
    if (head == NULL)
    {
        cout << "Linked list is Empty\n";
        return;
    }
    Node *temp = head;
    if (head == tail)
    {
        head = tail = NULL;
        delete temp;
        return;
    }
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
}

void deleteTail(Node *&head, Node *&tail)
{
    cout << "[DEBUG] deleteTail\n";
    if (head == NULL)
    {
        cout << "Linked list is Empty\n";
        return;
    }
    Node *temp = tail;
    if (head == tail)
    {
        head = tail = NULL;
        delete temp;
        return;
    }
    tail = tail->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
}

void deletePosition(Node *&head, Node *&tail, int pos)
{
    cout << "[DEBUG] deletePosition at pos: " << pos << endl;
    if (head == NULL)
    {
        cout << "Linked list is Empty\n";
        return;
    }
    int len = findLen(head);
    if (pos < 1 || pos > len)
    {
        cout << "Invalid position.\n";
        return;
    }
    if (pos == 1)
    {
        deleteAHead(head, tail);
        return;
    }
    if (pos == len)
    {
        deleteTail(head, tail);
        return;
    }
    Node *temp = head;
    int c = 1;
    while (c < pos - 1)
    {
        temp = temp->next;
        c++;
    }
    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    deleteNode->next->prev = temp;
    deleteNode->next = NULL;
    deleteNode->prev = NULL;
    delete deleteNode;
}

void print(Node *&head)
{
    cout << "DLL: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Clean entire DLL to prevent memory leaks
void deleteLinkedList(Node *&head, Node *&tail)
{
    cout << "[DEBUG] Deleting entire linked list\n";
    while (head != NULL)
    {
        deleteAHead(head, tail);
    }
}

void reverseLLRec(Node *&head, Node *&prev, Node *&curr)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *next = curr->next;
    curr->next = prev;
    curr->prev = next;
    reverseLLRec(head, curr, next);
    return;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertAfterTail(head, tail, 10);
    print(head);

    InsertBeforeHead(head, tail, 5);
    print(head);

    InsertAfterHead(head, tail, 7);
    print(head);

    InsertBeforeTail(head, tail, 9);
    print(head);

    InsertAfterTail(head, tail, 12);
    print(head);

    InsertAtPosition(head, tail, 8, 3); // position 3
    print(head);

    InsertAtPosition(head, tail, 15, findLen(head) + 1); // insert at end
    print(head);

    InsertAtPosition(head, tail, 1, 1); // insert at head
    print(head);

    InsertAtPosition(head, tail, 100, 100); // invalid
    print(head);

    // deleteAHead(head, tail);
    // print(head);

    // deleteTail(head, tail);
    // print(head);

    // deletePosition(head, tail, 3);
    // print(head);

    // deletePosition(head, tail, 1);
    // print(head);

    // deletePosition(head, tail, findLen(head));
    // print(head);

    cout << "Final Length: " << findLen(head) << endl;

    // deleteLinkedList(head, tail);
    print(head);

    Node *prev = NULL;
    cout << "reverse : "
         << endl;
    reverseLLRec(head, prev, head);
    print(head);

    reverseLLRec(head, prev, head);
    print(head);
    return 0;
}
