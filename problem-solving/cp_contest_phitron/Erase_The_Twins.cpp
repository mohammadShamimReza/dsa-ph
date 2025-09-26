#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int s;
        cin >> s;
        string st;
        cin >> st;
        string t = "";
        for ( auto c:st)
        {
            if(!t.empty() && t.back() == c){
                t.pop_back();
            }else{
                t.push_back(c);
            }
        }

        cout << t.size() << " " << endl;
        }

    return 0;
}