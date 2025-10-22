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
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
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
        }

        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }
        p->left = myLeft;
        p->right = myRight;
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
            q.push(p->right);
    }
    return root;
};
int max_height(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}
void print_lavel(Node *root, int lavel , int mh) {
   queue< pair<Node *, int>> q;

   if(lavel >= mh){
       cout << "Invalid";
       return;
   }

    if (root )
    {
        q.push({root, 0});
    }

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *node = p.first;
        int lav = p.second;

        if(lav == lavel){
            cout << node->val << " ";
        }

        if(node->left){
            q.push({node->left, lav + 1});
        }

        if(node->right){
            q.push({node->right, lav + 1});
        }
    }
};

int main()
{
    Node *root = input_tree();
    int lavel;
    cin >> lavel;
    int mh = max_height(root);
    print_lavel(root, lavel, mh);
    return 0;
}