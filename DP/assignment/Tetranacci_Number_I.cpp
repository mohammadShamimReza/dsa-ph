#include<bits/stdc++.h>
using namespace std;
int dp[1005];
int tribonacci(int n) {

    if (n == 0 || n == 1 || n == 2 || n == 3)
    {
        if(n == 2){
            return 1;
        }else if(n == 3){
            return 2;
        }else{
            return n;
        }
    }
    if(dp[n] != -1){
        return dp[n];
    }
    // cout << dp[n] << " " << n << endl;
    dp[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3) + tribonacci(n - 4);

    return dp[n];
};
int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    int res =  tribonacci(n);
    cout << res;
    return 0;
}