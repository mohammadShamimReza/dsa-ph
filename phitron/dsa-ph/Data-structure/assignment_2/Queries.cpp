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
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
};
void delete_any_position(Node *&head, int pos)
{
    if (pos == 0 )
    {
        Node *deleteNode1 = head;
        if(head->next != NULL){

            head = head->next;
        }
        delete deleteNode1;
        
        }else if (pos > 0){
            int size = 0;
            Node *current = head;
            while (current->next != NULL)
            {
                size++;
                current = current->next;
            }

            if (pos > size)
            {
                return;
            }else
            {
                Node *temp = head;

                for (int i = 0; i < pos - 1; i++)
                {
                    temp = temp->next;
                }
                Node *deleteNode = temp->next;
                temp->next = temp->next->next;
                delete deleteNode;
            }
        }
};
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next)
    {

        temp = temp->next;
    }
    temp->next = newNode;
};
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{

    int n;
    cin >> n;
    Node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        int point;
        cin >> point;
        int val;
        cin >> val;
        if(point == 0){
            insert_to_head(head, val);
        }else if(point == 1){
            insert_at_tail(head, val);
        }else if(point == 2){
            delete_any_position(head, val);
        }
        print_linked_list(head);
        cout << endl;
    }

    return 0;
}