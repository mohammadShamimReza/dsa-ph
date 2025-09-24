#include<bits/stdc++.h>
using namespace std;
 
int main (){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int t;
    cin >> t;

    long long int res = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == t){
            res = i;
            break;
        }
    }
    cout << res;

    return 0;
}