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
void insert_into_tail(Node *&head, Node *&tail, int val) {
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
};
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int n;
    while (true)
    {
        cin >> n;
        if(n == -1){
            break;
        }
        insert_into_tail(head, tail, n);
        insert_into_tail(head2, tail2, n);
    }
    string poi = "YES";
    for (Node *i = head, *j = tail2; i != NULL, j != NULL; i = i->next, j = j->prev)
    {
        if (i->val != j->val)
        {
            poi = "NO";
            break;
        }
    }

    cout << poi << endl;

    return 0;
}