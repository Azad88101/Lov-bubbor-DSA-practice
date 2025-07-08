#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
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
int main(int argc, char const *argv[])
{
    Node *a = new Node;
    Node *b = new Node;
    Node *c = new Node;
    Node *d = new Node;
    Node *e = new Node;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    a->getValue();
    b->getValue();
    c->getValue();
    d->getValue();
    // cout << e;

    delete a;

    return 0;
}
