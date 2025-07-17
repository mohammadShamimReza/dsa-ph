#include<bits/stdc++.h>
using namespace std;
class Node{

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
void insert_in_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_in_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void printDoublyLinkedList(Node *tail) {
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->prev ;
    }
};

void insert_any_position(Node *head, Node *tail, int val, int pos)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = head;

    for (int i = 0; i < pos; i++)
    {
        temp = temp->next;
    }
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insert_in_head(head, tail, 55);
    insert_in_tail(head, tail, 40);
    insert_in_head(head, tail, 10);

    insert_in_head(head, tail, 3);
    insert_in_head(head, tail, 4);
    insert_any_position(head, tail, 100, 2);
    insert_any_position(head, tail, 101, 2);
    insert_any_position(head, tail, 102, 2);

    printDoublyLinkedList(tail);
    return 0;
}