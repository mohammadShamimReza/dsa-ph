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

    sort(arr.begin(), arr.end());
    string ans="NO";
    for (int i = 0; i < n-1; i++)
    {

        if (arr[i] == arr[i + 1])
        {
            ans = "YES";
        }

    }

    cout << ans;

    return 0;
}