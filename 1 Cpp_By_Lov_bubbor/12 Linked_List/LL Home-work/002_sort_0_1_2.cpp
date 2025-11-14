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
        this->next = NULL;
    }
};

void insert(node *&head, int data)
{

    node *newnode = new node(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

void sort1(node *&head)
{

    node *temp = head;

    int zero=0;
    int one=0;
    int two=0;

    while (temp != NULL)
    {
        if (temp->data == 0)
            zero++;

        if (temp->data == 1)
            one++;

        if (temp->data == 2)
            two++;

        temp = temp->next;
    }

    temp = head;

    while (zero--)
    {
        temp->data = 0;
        temp = temp->next;
    }

    while (one--)
    {
        temp->data = 1;
        temp = temp->next;
    }

    while (two--)
    {
        temp->data = 2;
        temp = temp->next;
    }

    return;
}

void printLL(node *&head)
{
    node *temp = head;

    while (temp)
    {
        cout << temp->data << " -> ";

        temp = temp->next;
    }

    cout << " NULL \n";
}

int main(int argc, char const *argv[])
{
    node *head = NULL;

    insert(head, 1);
    insert(head, 0);
    insert(head, 2);
    insert(head, 1);
    insert(head, 0);
    insert(head, 1);
    insert(head, 0);
    insert(head, 1);

    printLL(head);

    sort1(head);
    printLL(head);




    
    return 0;
}
