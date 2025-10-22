#include<bits/stdc++.h>
using namespace std;
 
int main (){
    string s;
    cin >> s;
    vector<int> arr(26, 0);

    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
        cout << arr[s[i] - 'a'];
    }

    for (int i = 0; i < 26; i++)
    {
        if(arr[i] != 0){
            cout << char('a' + i) << " " << ":" << " " << arr[i] << endl;
        }
        

    }

    return 0;
}