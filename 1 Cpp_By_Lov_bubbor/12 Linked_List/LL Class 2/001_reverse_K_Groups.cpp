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
node *reverse(node *head, int k)
{
    if (!head)
        return NULL;

    node *prev = NULL;
    node *curr = head;
    node *next = NULL;
    int count = 0;

    // Reverse first k nodes
    while (curr && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // 'head' is now the last node in the reversed block
    // Connect it to the result of reversing the rest
    if (next)
        head->next = reverse(next, k);

    // 'prev' is the new head of this block
    return prev;
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

    printLL(head);

    node *Nhead =
        reverse(head, 3);

    printLL(Nhead);
    return 0;
}
