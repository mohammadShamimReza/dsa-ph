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
void insert_to_tal(Node *&head, Node *&tail, int val)
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

void getRes(Node *head)
{
    Node *temp = head;
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *previousJ = i;
        Node *j = i->next;

        while (j != NULL)
        {
            if(i->val == j->val){
                Node *deleteNode = j;
                previousJ->next = j->next;
                j = j->next;
                delete deleteNode;
            }else{
                previousJ = j;
                j = j->next;
            }
        }
        
    }
    while (temp)
    {

        cout << temp->val << " ";
        temp = temp->next;
    }
};
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
            insert_to_tal(head, tail, val);
        }
        // print_linked_list(head);
        getRes(head);


    return 0;
}