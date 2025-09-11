#include<bits/stdc++.h>
using namespace std;
 int fac(int val){
    if(val == 1){
        return 1;
    }
    int res = fac(val - 1);
    return res * val;
 }
int main (){
    cout << fac(5);
    return 0;
}