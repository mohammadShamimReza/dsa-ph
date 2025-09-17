#include <bits/stdc++.h>
using namespace std;

int dp[1005];
int fab(int val)
{
    if (val == 0 || val == 1)
    {
        return val;
    }
    if(dp[val] != -1){
        return dp[val];
    }

    dp[val] = fab(val - 1) + fab(val - 2);
    
    return dp[val];
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int n;

    cin >> n;
    cout << fab(n) << endl;
    return 0;
}