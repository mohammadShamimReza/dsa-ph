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

 void insert_to_head(Node* &head, int val) {
     Node *newNode = new Node(val);
     newNode->next = head;
     head = newNode;
 };
 void insert_at_tail(Node *&head, int val) {
     Node *newNode = new Node(val);
     if(head == NULL){
         head = newNode;
         return;
     }
     Node *temp = head;
     while (temp->next )
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
         
         cout << temp->val << endl;
         temp = temp->next;
     }
 }
 int main()
 {
     Node *head = new Node(10);
     Node *a = new Node(20);
     Node *b = new Node(30);

     head->next = a;
     a->next = b;

      insert_to_head(head, 300);
 insert_to_head(head, 3);
 insert_at_tail(head, 421);
 print_linked_list(head);

 return 0;
 }