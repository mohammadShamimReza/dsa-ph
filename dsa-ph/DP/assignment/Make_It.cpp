#include<bits/stdc++.h>
using namespace std;
int memo[100005];
bool finding(int s, int val)
{
    if (s == val)
    {
        return true;
    }
    if(s > val){
        return false;
    }
    if(memo[s] != -1){
        return memo[s];
    }

    return memo[s] = finding(s + 3, val) || finding(s * 2, val);
}

int main (){
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        
        int val;
        cin >> val;
        memset(memo, -1, sizeof(memo));
        bool res = finding(1, val);
        if( res == true){
            cout << "YES"<< endl;
        }else{

            cout << "NO" << endl;
        }
    }

    return 0;
}