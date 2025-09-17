#include<bits/stdc++.h>
using namespace std;
 
int main (){
    string s;
    cin >> s;
    while (true)
    {
        int f = s.find("EGYPT");
        if (f != -1)
        {
            s.replace(f, 5, " ");
        }else if(f == -1){
            break;
        }
    }
    cout << s;

    return 0;
}