#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class node
{

public:
    int data;
    node *next;

    node(int val)
    {

        this->data = val;
        next = NULL;
    }
};
void insert(node *&head, int data)
{
    node *newnode = new node(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *tail = head;
    while (tail->next)
    {
        tail = tail->next;
    }
    tail->next = newnode;
    tail = newnode;
}

void print(node *&head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

vector<int> nextLargerNodes(node *head)
{
    vector<int> ll;
    node *temp = head;
    while (temp != NULL)
    {
        ll.push_back(temp->data);
        temp = temp->next;
    }
    int n = ll.size();
    vector<int> ans(n, 0);
    stack<int> st;
    st.push(0);
    int i = 0;
    for (int i = 0; i < n; ++i)
    {
        while (!st.empty() && ll[i] > ll[st.top()])
        {
            ans[st.top()] = ll[i];
            st.pop();
        }
        st.push(i);
    }

    for (auto v : ans)
    {
        cout << v << " ";
    }

    return ans;
}
int main(int argc, char const *argv[])
{
    node *head = NULL;
    insert(head, 2);
    insert(head, 7);
    insert(head, 4);
    insert(head, 3);
    insert(head, 5);
    // insert(head, 5);
    // insert(head, 6);
    print(head);

    nextLargerNodes(head);
    return 0;
}

// 2,7,4,3,5