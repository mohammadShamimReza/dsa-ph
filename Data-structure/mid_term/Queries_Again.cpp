#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_from_l_to_r(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void print_from_r_to_l(Node *tail)
{

    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
void insert_at_head(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;

    tail->next = newNode;
    tail = newNode;
}
void insert_at_any_position(Node *&head, Node *&tail, int val, int pos)
{
    Node *newNode = new Node(val);

    int size = 0;
    for (Node * i = head; i !=NULL; i = i->next)
    {
        size++;
    }


     if(pos == 0){
        insert_at_head(head, tail, val);
        cout << "L -> ";
        print_from_l_to_r(head);
        cout << "R -> ";
        print_from_r_to_l(tail);
    }
    else if( pos == size){
        insert_at_tail(head, tail, val);
        cout << "L -> ";
        print_from_l_to_r(head);
        cout << "R -> ";
        print_from_r_to_l(tail);
    }
    else if (pos > size)
    {
        cout << "Invalid" << endl;
    } 
    else if (pos < size)
        {
            int p = 0;
            Node *temp = head;
            while (temp != NULL)
            {
                if (p == pos)
                {
                    newNode->next = temp;
                    newNode->prev = temp->prev;
                    temp->prev->next = newNode;
                    temp->prev = newNode;
                }
                p++;
                temp = temp->next;
            }
            cout << "L -> ";
            print_from_l_to_r(head);
            cout << "R -> ";
            print_from_r_to_l(tail);
        }
};


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int pos, val;
        cin >> pos;
        cin >> val;
        insert_at_any_position(head, tail, val, pos);
     
    }

    return 0;
}