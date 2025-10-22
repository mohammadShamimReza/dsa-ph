#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
        string val;
        Node *next;
        Node *prev;
        Node(string val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_into_tail(Node *&head, Node *&tail, string val) {
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

    string val;
    while (true)
    {
        cin >> val;
        if(val == "end"){
            break;
        }
        insert_into_tail(head, tail, val);
    }

    int n;
    cin >> n;
    Node *temp = head;
    string str;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if(str == "visit"){
            string tar;
            cin >> tar;
            Node* ltemp = head;
            while (true)
            {
                if (ltemp->val == tar)
                {
                    cout << ltemp->val << endl;
                    temp = ltemp;
                    break;
                }

                if(ltemp == tail){
                    cout << "Not Available" << endl;
                    break;
                }
             
                
                ltemp = ltemp->next;
            }
                }
        else if (str == "prev")
        {
            if(temp->prev == NULL){
                cout << "Not Available" << endl;
            }
            else
            {
                cout << temp->prev->val<< endl;
                temp = temp->prev;
            }
        }
        else if (str == "next")
        {
            if (temp->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {

                cout << temp->next->val << endl;
                temp = temp->next;
            }
        }
    }

    return 0;
}