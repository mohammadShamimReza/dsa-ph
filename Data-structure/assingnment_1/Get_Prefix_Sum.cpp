#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long int> preSum(n);
for (int i = 0; i < n; i++)
{
    if(i == 0) {
        preSum [i]= arr[i];
    }else {
        preSum[i] = arr[i] + preSum[i - 1];
    }
}

for (int i = n-1 ; i >= 0; i--)
{
    cout << preSum[i] << " ";
}

    return 0;
}