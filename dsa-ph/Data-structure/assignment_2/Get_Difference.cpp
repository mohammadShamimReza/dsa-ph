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
 void insert_in_tail(Node *&head, Node *&tail, int val) {
     Node *newNode = new Node(val);
     if(head == NULL){
         head = newNode;
         tail = newNode;
         return;
     }
     tail->next = newNode;
     tail = newNode;
 };
 int print_linked_list(Node *head){

     Node *temp = head;
     Node *temp2 = head;
     int max = temp->val;
      while (temp != NULL)
      {
          if(temp->val > max){
              max = temp->val;
          }
          temp = temp->next;
      }

       int min = temp2->val;
       while (temp2 != NULL)
       {
           if (temp2->val < min)
           {
               min = temp2->val;
           }
           temp2 = temp2->next;
       }
     return max - min;
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
         insert_in_tail(head, tail, val);
     }
    int res = print_linked_list(head);
    cout << abs(res);
    return 0;
 }