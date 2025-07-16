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
string result(Node * head, Node * head2) {
    string res = "YES";
    while (true)
    {
        if(head->val != head2->val){
          return  res = "NO";
            
        }

        if(head->next == NULL && head2->next == NULL){
            break;
        }else if(head->next == NULL && head2->next !=NULL){
            return res = "NO";
        }else if(head->next != NULL && head2->next == NULL){
            return res = "NO";
        }
        head = head->next;
        head2 = head2->next;
    };

    return res;
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
        insert_to_tal(head, tail, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_to_tal(head2, tail2, val2);
    }

    string check_same_same = result(head, head2);
    cout << check_same_same << endl;
    return 0;
}