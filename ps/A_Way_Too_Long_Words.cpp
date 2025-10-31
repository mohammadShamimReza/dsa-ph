#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i].size() <= 10){
            cout << arr[i] << endl;
        }else{
                char fs = arr[i][0];
                char ls = arr[i][arr[i].size() - 1];
                string nu = to_string(arr[i].size() -2);
                string res = fs + nu + ls;
                cout << res << endl;
        }
    }
    return 0;
}