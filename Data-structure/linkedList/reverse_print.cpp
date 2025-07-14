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

 void rec(int s, int end){

     if (s > end){
         return;
     }
     rec(s + 1, end);
     cout << "value" << s  << endl;
 }

 int main()
 {
     int n = 5;
     rec(1, n);
     return 0;
 }