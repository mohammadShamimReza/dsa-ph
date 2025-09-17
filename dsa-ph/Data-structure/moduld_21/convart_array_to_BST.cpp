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




void lavel_order(Node *root)
{
    if (root == NULL)
        return;

    Node *f = root;
    queue<Node *> q;
    q.push(f);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left)
        {
            q.push(p->left);
        }

        if (p->right)
        {
            q.push(p->right);
        }
    }
}

Node* convart_array_to_bst(int arr[], int n, int left, int right){
    if(left> right){
        return NULL;
    }
    int mid = (left + right) / 2;
    Node *root = new Node(arr[mid]);
   Node* leftRoot = convart_array_to_bst(arr, n, left, mid - 1);
   Node* rightRoot = convart_array_to_bst(arr, n, mid + 1, right);
   root->left = leftRoot;
   root->right = rightRoot;
   return root;
};

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   Node* root =  convart_array_to_bst(arr, n, 0, n - 1);
   lavel_order(root);
   return 0;
}