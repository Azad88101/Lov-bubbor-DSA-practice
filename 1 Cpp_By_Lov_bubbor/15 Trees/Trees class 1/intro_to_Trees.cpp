#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *BuildTree(Node *root)
{
    cout << "enter data\n ";

    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
        return NULL;

    cout << "Left me data\n ";

    root->left = BuildTree(root->left);
    cout << "right me data\n ";

    root->right = BuildTree(root->right);

    cout << "return root \n ";

    return root;
}

Node *BuildTree2(int data)
{
    if (data == -1)
        return NULL;
    Node *root = new Node(data);

    cout << "left data ";
    int l;
    cin >> l;

    root->left = BuildTree2(l);

    cout << "right data ";
    int r;
    cin >> r;
    root->right = BuildTree2(r);
    return root;
}

// void PrintTree(Node *root)
// {

//     if (root == NULL)
//         return;

//     cout << root->data << " ";

//     PrintTree(root->left);
//     PrintTree(root->right);
// }

void LevelOrdTrav(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

void BuildTreeFromLevel(Node *&root)
{
    queue<Node *> q;
    cout << "enter root data\n";
    int d;
    cin >> d;
    root = new Node(d);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "enter left data for this node   "
             << temp->data << endl;
        int leftD;
        cin >> leftD;

        if (leftD != -1)
        {
            temp->left = new Node(leftD);
            q.push(temp->left);
        }

        cout << "enter right data for this node  " << temp->data << endl;
        int rightD;
        cin >> rightD;
        if (rightD != -1)
        {
            temp->right = new Node(rightD);
            q.push(temp->right);
        }
    }
}
int main()
{
    Node *root = NULL;
    // cout << "root data ";
    // int data;
    // cin >> data;
    // root = BuildTree2(data);
    // 4 3 1 -1 -1 2 -1 -1 5 3 -1 -1 6 -1 -1

    BuildTreeFromLevel(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // PrintTree(root);

    cout << "Traversal Level wise\n";
    LevelOrdTrav(root);
    //  iordedr - LNR , preorder - NLR, postorder - LRN

    return 0;
}