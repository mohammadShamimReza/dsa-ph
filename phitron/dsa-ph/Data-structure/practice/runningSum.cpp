#include<bits/stdc++.h>
using namespace std;
int main (){
 int n ;
 cin >> n;
 vector<int> arr(n);
 for (int i = 0; i < n; i++)
 {
     cin >> arr[i];
 }

 vector<int> ans(n);
 for (int i = 0; i < n; i++)
 {
    if(i == 0){
        ans[i] = arr[i];
    
    }else{
        ans[i] = ans[i - 1] + arr[i];
    }
 }

 for (int i = 0; i < n; i++)
 {
     cout << ans[i] << " ";
 }

 return 0;
}