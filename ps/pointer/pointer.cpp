#include<bits/stdc++.h>
using namespace std;
 
int main (){
 int a = 10;
 int b = 20;
 int c = 30;

 int *d = &a;

*d = 40;

 cout << "Address of c: " << d << endl;
 return 0;
}