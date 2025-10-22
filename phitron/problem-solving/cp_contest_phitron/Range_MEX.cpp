#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n, t;
    cin >> n >> t;
     vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> us(arr.begin(), arr.end());

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int v = b - a;
        set<int> us2 = us;
        for (int i = a - 1; i < b; i++)
        {
            us2.erase(arr[i]);
        }
       
        
      
        cout << *us2.begin() << endl;
    }

    return 0;
}