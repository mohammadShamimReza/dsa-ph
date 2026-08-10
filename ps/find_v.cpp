#include<stdio.h>
#include<iostream>
using namespace std;
int f(int n)
{
    cout << n << " " ;
    if (n <= 1)
        return n;
    return f(n / 2) + n;
}

int main (){
    int n;
    cin >> n;
    int res = f(n);
    cout << res;
    return 0;
}