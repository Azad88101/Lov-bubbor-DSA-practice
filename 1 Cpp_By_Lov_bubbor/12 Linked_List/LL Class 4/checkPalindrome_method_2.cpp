#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        next = NULL;
    }
};

// Linked list ko print karne wali function 🚀
void printList(node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Linked list ko copy karne wali function 📋
node* copyList(node* head) {
    if (head == NULL) return NULL; // Agar list hi nahi hai to kya hi copy kare 😅

    node* newHead = NULL;
    node* newTail = NULL;
    node* temp = head;

    while (temp != NULL) {
        node* newNode = new node(temp->data); // Naya node banaya same data ke saath

        if (newHead == NULL) {
            // Pehla node set kar diya
            newHead = newNode;
            newTail = newNode;
        } else {
            // Agle nodes ko link karte ja rahe hai
            newTail->next = newNode;
            newTail = newNode;
        }

        temp = temp->next; // Aage badho bhai
    }

    return newHead; // Copy ready ho gayi 🪄
}

// Linked list ko reverse karne wali function 🔄
node* reverseList(node* head) {
    node* prev = NULL;
    node* curr = head;

    while (curr != NULL) {
        node* nextNode = curr->next; // Agla node yaad rakh lo
        curr->next = prev; // Reverse kar do link ko
        prev = curr;       // Prev ko aage badhao
        curr = nextNode;   // Current ko aage badhao
    }

    return prev; // Naya head de diya reversed list ka 🚩
}

// Do linked lists ko compare karne wali function 🤝
bool compareLists(node* head1, node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->data != head2->data) {
            return false; // Jaisi hi data nahi mila, palindrome nahi hai 😔
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true; // Sab match hua, list palindrome hai 😎
}

// Palindrome check karne wali function using copy & reverse 🚨
bool isPalindrome(node* head) {
    node* copiedList = copyList(head);          // Pehle copy banayi
    node* reversedCopiedList = reverseList(copiedList); // Phir usko reverse kiya
    return compareLists(head, reversedCopiedList); // Ab dono ko compare kar diya
}

int main() {
    // Linked list banate hai: 1 -> 2 -> 3 -> 2 -> 1
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(2);
    head->next->next->next->next = new node(1);

    printList(head); // Dekho bhai list kaisi lag rahi hai 👀

    if (isPalindrome(head)) {
        cout << "Linked list is a palindrome. ✅\n";
    } else {
        cout << "Linked list is not a palindrome. ❌\n";
    }

    return 0;
}

