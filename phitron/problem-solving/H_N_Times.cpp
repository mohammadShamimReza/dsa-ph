#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        char c;
        cin >> t;
        cin >> c;
        for (int i = 0; i < t; i++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}