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
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
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
    cout << "Null\n";
}

void duplicates(node *&head)
{
    node *curr = head;
    while (curr->next)
    {
        if (curr->data == curr->next->data)
        {
            node *temp = curr->next;

            curr->next = curr->next->next;
            delete (temp);
        }
        curr = curr->next;
    }
}
int main(int argc, char const *argv[])
{

    node *head;
    insert(head, 8);
    insert(head, 7);
    insert(head, 7);
    insert(head, 6);
    insert(head, 5);
    insert(head, 5);
    insert(head, 4);

    printLL(head);

    duplicates(head);

    printLL(head);

    return 0;
}
