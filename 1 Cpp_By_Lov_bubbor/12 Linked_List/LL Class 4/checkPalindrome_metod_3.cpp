// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };

// void printList(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " -> ";
//         head = head->next;
//     }
//     cout << "NULL\n";
// }

// // REVERSE LIST FUNCTION
// node *reverseList(node *head)
// {
//     node *prev = NULL;
//     node *curr = head;

//     while (curr != NULL)
//     {
//         node *nextNode = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = nextNode;
//     }

//     return prev;
// }

// int lenLL(node *head)
// {
//     node *temp = head;
//     int i = 0;
//     while (temp != NULL)
//     {
//         i++;
//         temp = temp->next;
//     }
//     cout << i;
//     return i;
// }
// // COMPARE TWO LISTS
// bool compareLists(node *head1, node *head2)
// {
//     while (head1 != NULL && head2 != NULL)
//     {
//         if (head1->data != head2->data)
//         {
//             return false;
//         }
//         head1 = head1->next;
//         head2 = head2->next;
//     }
//     return true;
// }

// // CHECK PALINDROME USING COPY & REVERSE
// bool isPalindrome(node *head)
// {

//     // /odd
//     int len = lenLL(head);
//     int i = 1;
//     node *temp = head;
//     if (len % 2 != 0)
//     {
//         while (i < ((len / 2) + 1))
//         {
//             temp = temp->next;
//             i++;
//         }
//     }
//     else
//     {
//         while (i < (len / 2))
//         {
//             temp = temp->next;
//             i++;
//         }
//         temp = temp->next;
//     }

//     cout << "temp ka adatat" << temp->data;

//     node *reversedCopiedList = reverseList(temp);
//     return compareLists(head, reversedCopiedList);
// }

// int main()
// {
//     node *head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);
//     head->next->next->next = new node(2);
//     head->next->next->next->next = new node(11);

//     lenLL(head);
//     printList(head);

//     if (isPalindrome(head))
//     {
//         cout << "Linked list is a palindrome.\n";
//     }
//     else
//     {
//         cout << "Linked list is not a palindrome.\n";
//     }

//     return 0;
// }

// above code works smoothly/
////////////////////////////////////////////////////////////////////////////////////////////////////
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

void printList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Reverse Linked List
node *reverseList(node *head)
{
    node *prev = NULL;
    node *curr = head;

    while (curr != NULL)
    {
        node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

// Palindrome check using optimal method
bool isPalindrome(node *head)
{
    if (head == NULL || head->next == NULL)
        return true;

    // Step 1: Find the middle
    node *slow = head;
    node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "slow ja data " << slow->data << endl;

    // Step 2: Reverse the second half
    node *secondHalf = reverseList(slow->next);
    printList(secondHalf);

    // Step 3: Compare first half and reversed second half
    node *firstHalf = head;
    node *temp = secondHalf;
    while (temp != NULL)
    {
        if (firstHalf->data != temp->data)
        {
            return false;
        }
        firstHalf = firstHalf->next;
        temp = temp->next;
    }

    return true;
}

int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    // head->next->next->next->next = new node(5);
    head->next->next->next->next = new node(3);
    head->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next = new node(1);

    printList(head);

    if (isPalindrome(head))
    {
        cout << "Linked list is a palindrome.\n";
    }
    else
    {
        cout << "Linked list is not a palindrome.\n";
    }

    return 0;
}
