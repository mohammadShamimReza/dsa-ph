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
 void insert_to_tal(Node *&head, Node *&tail, int val) {
     Node *newNode = new Node(val);
     if (head == NULL){
         head = newNode;
         tail = newNode;
         return;
     }
     tail->next = newNode;
     tail = newNode;
 };
 
 int getRes(Node *head, int target) {
     Node *temp = head;
     int p = 0;
     int res = -1;
     while (temp != NULL)
     {

        if(temp->val == target){
            res = p;
            break;
        }
        p = p + 1;
        temp = temp->next;
     }

     return res;
 };
 int main()
 {
 
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
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
         int target;
         cin >> target;
          int res = getRes(head, target);
          cout <<res<<  endl;
     }

     return 0;
 }