#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
        int val;
        Node *left;
        Node *right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node * tree_input(){
    int val;
    cin >> val;
    Node *root;
    queue<Node *> q;
    if(val != -1){
      root = new Node(val);
      q.push(root);
    }
 
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *leftNode, *rightNode;

        if(l == -1){
            p->left = NULL;
        }else{
            leftNode = new Node(l);
            p->left = leftNode;
            q.push(leftNode);
        }
        if (r == -1)
        {
            p->right = NULL;

        }else{
            rightNode = new Node(r);
            p->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;

}

void lavel_order(Node*root){
    Node *f = root;
    queue<Node *>  q;
    if(root->val != -1){

        q.push(f);
    }
    int val = 0;
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        if(p->left == NULL && p->right == NULL){

        }else{
            val = val + p->val;
        }

        if(p->left){
            q.push(p->left);
        }

        if(p->right){
            q.push(p->right);
        }
    }
    cout << val;
}
int main (){
  Node*root = tree_input();
    lavel_order(root);
    return 0;
}