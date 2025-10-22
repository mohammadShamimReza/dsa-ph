#include<bits/stdc++.h>
using namespace std;

void fun(int* &p){
    int y = 200;
    p = &y;
    cout << *p << " fun" << endl;
};

int main (){
    int x = 10;
    int *a = &x;
    fun(a);
    cout << *a << " main" << endl;

    return 0;
}