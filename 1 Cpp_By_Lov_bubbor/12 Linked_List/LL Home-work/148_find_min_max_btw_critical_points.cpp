#include <iostream>
#include <vector>
// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/
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

void InsertAtHead(node *&head, node *&tail, int data)
{
    node *newNode = new node(data);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
        tail = newNode;
}

void insertAtEnd(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        InsertAtHead(head, tail, data);
        return;
    }
    node *newNode = new node(data);
    tail->next = newNode;
    tail = newNode;
}

vector<int> nodesBetweenCriticalPoints(node *head)
{
    vector<int> ans = {-1, -1};
    if (!head)
        return ans;

    if (length(head) < 3)
        return ans;
    node *prev = head;
    node *curr = head->next;
    if (!curr)
        return ans;
    node *next = head->next->next;
    if (!next)
        return ans;

    int minDis = INT_MAX;
    int maxDis = INT_MIN;
    int firstCp = -1;
    int lastCp = -1;
    int i = 1;
    while (next)
    {
        bool isCP = ((curr->data > prev->data && curr->data > next->data) || (curr->data < prev->data && curr->data < next->data)) ? true : false;
        if (isCP && firstCp == -1)
        {
            firstCp = i;
            lastCp = i;
        }

        else if (isCP)
        {
            minDis = min(minDis, i - lastCp);
            lastCp = i;
        }
        ++i;
        prev = prev->next;
        curr = curr->next;
        next = next->next;
    }

    if (firstCp == lastCp)
        return ans;

    maxDis = lastCp - firstCp; 

    ans[0] = minDis;
    ans[1] = maxDis;
    return ans;
}

int main(int argc, char const *argv[])
{

    node *head1 = NULL;
    node *tail1 = NULL;

    insertAtEnd(head1, tail1, 5);
    insertAtEnd(head1, tail1, 3);
    insertAtEnd(head1, tail1, 1);
    insertAtEnd(head1, tail1, 2);
    insertAtEnd(head1, tail1, 5);
    insertAtEnd(head1, tail1, 1);
    insertAtEnd(head1, tail1, 2);
    // insertAtEnd(head1, tail1, 8);

    printll(head1);

    nodesBetweenCriticalPoints(head1);
    return 0;
}
