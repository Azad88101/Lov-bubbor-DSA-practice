#include <iostream>
// #include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insert(node *&head, int data)
{
    node *t = new node(data);
    if (head == NULL)
    {
        head = t;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = t;
    t->next = NULL;
}

void printLL(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void deletion(node *&head, int pos)
{
    if (!head || pos <= 0)
        return;
    node *curr = head;
    if (pos == 1)
    {
        head = curr->next;
        curr->next = NULL;
        delete curr;
        return;
    }

    node *prev = NULL;
    int count = 1;
    while (count < pos && curr->next)
    {
        count++;
        prev = curr;
        curr = curr->next;
    }
    if (!curr->next)
        return;

    prev->next = curr->next;
    delete curr;
}

void reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    while (curr)
    {
        node *next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev;
}
int main(int argc, char const *argv[])
{
    node *head = NULL;
    insert(head, 2);
    insert(head, 1);

    insert(head, 5);
    insert(head, 8);
    insert(head, 1);

    insert(head, 5);
    insert(head, 8);

    printLL(head);

    deletion(head, 1);

    printLL(head);

    reverse(head);
    printLL(head);
    return 0;
}
