#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;

        // cout << "default con";
    }

    void getValue() const
    {
        // data=6;
        cout << " data " << data << " 'next adderess' " << next << "\n";
    }

    ~Node()
    {
        // delete data;
        cout << "desctructor";
    }
};

void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "  " << temp->data;
        temp = temp->next;
    }
}

void InsertNodeBeforHead(Node *&head, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// void InsertNodeAfterHead(Node *&tail, int data)
// {
//     if (tail == NULL)
//     {
//         tail = new Node(data);
//         return;
//     }
//     Node *newNode = new Node(data);
//     // newNode->next = tail->next;
//     tail->next = newNode;
//     tail = newNode;
// }



void InsertNodeAfterHead(Node *&head, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head->next;
    head->next = newNode;
}



int main(int argc, char const *argv[])
{
    //     Node *a = new Node(10);
    //     Node *b = new Node(20);
    //     Node *c = new Node(30);
    //     Node *d = new Node(40);
    //     Node *e = new Node(50);

    //     a->next = b;
    //     b->next = c;
    //     c->next = d;
    //     d->next = e;
    // a->getValue();
    // b->getValue();
    // c->getValue();
    // d->getValue();
    // cout << e;

    // delete a;

    // Print(a);

    // HOw to insert node//

    // Node *head = new Node(10);
    // Node *head = NULL;
    // InsertNodeBeforHead(head, 12);
    // InsertNodeBeforHead(head, 17);
    // InsertNodeBeforHead(head, 154);
    // InsertNodeBeforHead(head, 15976);
    // InsertNodeBeforHead(head, 186);

    Node *head = NULL;
    Node *tail = NULL;

    
    // InsertNodeAfterHead(head, 12);
    // InsertNodeAfterHead(head, 17);
    // InsertNodeAfterHead(head, 154);
    // InsertNodeAfterHead(head, 15976);
    // InsertNodeAfterHead(head, 186);
    Print(head);

    return 0;
}
