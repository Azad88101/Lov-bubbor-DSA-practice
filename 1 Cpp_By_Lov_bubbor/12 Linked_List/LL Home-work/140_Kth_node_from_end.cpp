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

void reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;

    while (curr != NULL)
    {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

void kth_node(node *&head, int n)
{
    node *temp = head;
    if (n < 0 || temp == NULL)
    {
        cout << "Invalid position\n";
        return;
    }
    int i = 0;
    while (i < n - 1)
    {
        temp = temp->next;
        i++;
    }

    cout << " data " << temp->data << "\n";
}
int main(int argc, char const *argv[])
{

    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = new node(6);

    int k = 3;

    int n = length(head);

    cout << n;
    n = n - k;

    kth_node(head, n);

    return 0;
}
