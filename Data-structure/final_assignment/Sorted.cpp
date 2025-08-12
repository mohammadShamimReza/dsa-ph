#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        set<int> s;
        while (t--)
        {
            int v;
            cin >> v;
            s.insert(v);
        }
        for(int i:s){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}