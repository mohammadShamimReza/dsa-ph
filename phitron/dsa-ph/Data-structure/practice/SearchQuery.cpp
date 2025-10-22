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
    int q;
    cin >> q;

    sort(arr.begin(), arr.end());
for (int i = 0; i < q; i++)
{
    int x;
    cin >> x;
    int l = 0, r = n - 1;
    int mid;
    bool found = false;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (mid == x)
        {
            found = true;
            break;
        }else if(mid > i){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    };
    if(found){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

    return 0;
}