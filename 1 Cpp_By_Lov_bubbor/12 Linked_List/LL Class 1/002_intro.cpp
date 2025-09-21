#include <iostream>
// #include <iostream>

using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

void insert(node *&head, int data)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return;
}
void print(node *&head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}
int main(int argc, char const *argv[])
{
    node *head = NULL;
    insert(head, 12);
    insert(head, 11);
    insert(head, 14);
    insert(head, 18);
    insert(head, 1);
    print(head);
    return 0;
}
