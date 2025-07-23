#include <iostream>
#include <vector>
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

// Check karne wali function ki linked list palindrome hai ya nahi (using extra space)
bool isPal1(node *&head)
{
    vector<int> arr; // Linked list ke data ko store karne ke liye vector
    node *temp = head;

    // Linked list ke sare elements vector me dal dete hai
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        // Agar start aur end se elements match nahi hue to palindrome nahi hai
        if (arr[i] != arr[j])
        {
            return 0; // false
        }
        i++;
        j--;
    }
    return 1; // true
}

int main(int argc, char const *argv[])
{
    // Linked list banana
    node *head = new node(1);
    node *first = new node(2);
    node *second = new node(3);
    node *third = new node(4);
    node *four = new node(3);
    node *five = new node(2);
    node *six = new node(1);

    // Nodes ko link karna
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = four;
    four->next = five;
    five->next = six;

    printll(head); // Linked list print karna

    cout << isPal1(head); // Palindrome check karna, 1 -> palindrome hai, 0 -> nahi hai
    return 0;
}
