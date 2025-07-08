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
void Aftertail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        // cout << "List is empty. Cannot insert before tail.\n";
        head = tail = new Node(data);
        return;
    }
    Node *newNode = new Node(data);
    // newNode->next = tail->next;
    tail->next = newNode;
    tail = newNode;
}

void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    Node *tail = NULL;

    Aftertail(head, tail, 12);
    Aftertail(head, tail, 13);
    Aftertail(head, tail, 16);
    Aftertail(head, tail, 10);
    Aftertail(head, tail, 15);

    Print(head);
    return 0;
}
