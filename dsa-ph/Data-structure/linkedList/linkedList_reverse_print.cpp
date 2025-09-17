#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_to_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp)
    {

        cout << temp->val << endl;
        temp = temp->next;
    }
}
void print_revarse_linked_list (Node* head){

    if(head == NULL){
        return;
    }
    print_revarse_linked_list(head->next);
    cout <<"head value" << head->val << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    print_linked_list(head);

    print_revarse_linked_list(head);

    return 0;
}