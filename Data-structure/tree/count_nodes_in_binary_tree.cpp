#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int p;
    cin >> p;
    Node *root;
    if (p == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(p);
    }
    queue<Node *> q;

    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
            f->left = myLeft;
        }

        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
            f->right = myRight;
        }

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    return root;
}
int count_nodes(Node *root)
{ 
    if(root == NULL){
        return 0;
    }
    int left = count_nodes(root->left);
    int right = count_nodes(root->right);
    return left + right + 1;
}
int main()
{
    Node *root = input_tree();
    int res = count_nodes(root);
    cout << res << " ";
    return 0;
}