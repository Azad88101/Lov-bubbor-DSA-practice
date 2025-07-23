#include <iostream>
#include <unordered_map>
#include <unordered_set>

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

// Linked list print karne wali function
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

// void removeDup(node *&head)
// {
//     node *temp = head;
//     while (temp->next != NULL && temp->data != temp->next->data)
//     {
//         temp = temp->next;

//         if (temp->data == temp->next->data)
//         {
//             temp->next = temp->next->next;
//             temp = head;
//         }
//     }
// }

void removeDup(node *&head)
{

    if (head == NULL)
    {
        cout << "LL is empty\n";
        return;
    }

    if (head->next == NULL)
    {
        cout << "No Duplicates\n";
        return;
    }

    node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            node *toDelete = temp->next;
            temp->next = temp->next->next;
            toDelete->next = NULL;
            delete toDelete;
        }
        else
        {
            temp = temp->next;
        }
    }
}

void removeDupKeepOne(node *&head)
{
    if (!head)
    {
        cout << "LL is empty\n";
        return;
    }

    unordered_set<int> seen;
    node *curr = head;
    node *prev = NULL;

    while (curr != NULL)
    {
        if (seen.find(curr->data) != seen.end())
        {
            // Duplicate found, remove it
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            // First occurrence, keep it
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
    }
}

int main(int argc, char const *argv[])
{
    // node *head = NULL;
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(2);
    head->next->next->next = new node(3);
    head->next->next->next->next = new node(4);
    head->next->next->next->next->next = new node(4);
    head->next->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next->next->next->next->next = new node(2);

    cout << "Original Linked List:\n";
    printll(head);

    removeDupKeepOne(head);

    cout << "Linked List after removing duplicates (keeping one occurrence):\n";
    printll(head);

    return 0;
}
