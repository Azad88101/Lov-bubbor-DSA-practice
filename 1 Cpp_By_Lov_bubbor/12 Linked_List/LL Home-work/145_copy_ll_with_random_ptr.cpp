#include <iostream>
#include <string>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

// Solution class
class Solution {
public:
    Node* copyRandomList(Node* head) {

        ///////////////// APPROACH 1: Using Hash Map and Node Linking
        // if (!head) return NULL;

        // unordered_map<Node*, Node*> mp;
        // Node* temp = head;
        // Node* newHead = NULL;
        // Node* newTail = NULL;

        // while (temp != NULL) {
        //     Node* newNode = new Node(temp->val);
        //     if (!newHead) {
        //         newHead = newTail = newNode;
        //     } else {
        //         newTail->next = newNode;
        //         newTail = newTail->next;
        //     }
        //     mp[temp] = newNode;
        //     temp = temp->next;
        // }

        // temp = head;
        // Node* temp2 = newHead;
        // while (temp != NULL) {
        //     temp2->random = temp->random ? mp[temp->random] : NULL;
        //     temp = temp->next;
        //     temp2 = temp2->next;
        // }
        // return newHead;

        ////////////////// APPROACH 2: Hash Map but in Compact Form
        // if (!head) return NULL;
        // unordered_map<Node*, Node*> mp;
        // Node* temp = head;
        // while (temp) {
        //     mp[temp] = new Node(temp->val);
        //     temp = temp->next;
        // }
        // temp = head;
        // while (temp) {
        //     mp[temp]->next = mp[temp->next];
        //     mp[temp]->random = mp[temp->random];
        //     temp = temp->next;
        // }
        // return mp[head];

        ////////////////// APPROACH 3: No Extra Space (O(1) Space)
        if (!head) return NULL;

        Node* temp = head;
        while (temp) {
            Node* newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }

        temp = head;
        while (temp) {
            Node* thiss = temp->next;
            thiss->random = temp->random ? temp->random->next : NULL;
            temp = thiss->next;
        }

        temp = head;
        Node* newHead = head->next;
        Node* copy = newHead;

        while (temp) {
            temp->next = copy->next;
            temp = temp->next;
            if (temp) {
                copy->next = temp->next;
                copy = copy->next;
            }
        }

        return newHead;
    }
};

// Helper function to print list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Val: " << temp->val;
        cout << ", Random: " << (temp->random ? to_string(temp->random->val) : "NULL") << "\n";
        temp = temp->next;
    }
}

// Main function to test the copy function
int main() {
    // Create original list
    Node* n1 = new Node(7);
    Node* n2 = new Node(13);
    Node* n3 = new Node(11);
    Node* n4 = new Node(10);
    Node* n5 = new Node(1);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    n1->random = NULL;
    n2->random = n1;
    n3->random = n5;
    n4->random = n3;
    n5->random = n1;

    Solution obj;
    Node* copiedList = obj.copyRandomList(n1);

    cout << "Original List:\n";
    printList(n1);
    cout << "\nCopied List:\n";
    printList(copiedList);

    return 0;
}
