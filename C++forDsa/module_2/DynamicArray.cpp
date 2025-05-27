#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int *x = new int;
    *x = 10;
    p = x;
    cout << "fun function " << *p <<" " << p << endl;
    return;
}

int main(){
    fun();
    cout << "main function2 " << *p <<" " << p;

    return 0;
}