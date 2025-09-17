#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
        int val;
        Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertNewNode(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};

void revarse( Node *&head, Node *&tail, Node *temp)
{
    if(temp->next == NULL){
        head = temp; 
        return;
    }


    revarse( head, tail,  temp->next);
    temp->next->next = temp;
    temp->next = NULL; 
}

void print_linkde_list(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insertNewNode(head, tail, val);
    }
    revarse(head,tail,  head);
    print_linkde_list(head);
    return 0;
}