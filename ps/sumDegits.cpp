#include<stdio.h>
#include<iostream>
using namespace std;
 
int sunDigits(int n){

    if (n <= 0)
    {
        return false;
    }


    return (n % 10) + sunDigits(n / 10);
}

int main (){
    int n;
    cin >> n;
 int p = sunDigits(n);
 cout << p;
 return 0;
}