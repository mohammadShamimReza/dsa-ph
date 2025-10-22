#include<bits/stdc++.h>
using namespace std;
int rec(int val){
    if(val > 5){
        return 0;
    }

    int sum = rec(val + 1);
   return sum + val;
}
int main (){
    cout << rec(1);
    return 0;
}