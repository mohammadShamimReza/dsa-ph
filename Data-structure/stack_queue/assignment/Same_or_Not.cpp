#include<bits/stdc++.h>
using namespace std;





int main (){
    int s, q;
    cin >> s;
    cin >> q;

    string re = "YES";
    if (s != q)
    {
        re = "NO";
        cout << re;
        return 0;
    }
    stack<int> st;

    for (int i = 0; i < s; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    queue<int> qu;
    for (int i = 0; i < q; i++)
    {

        int x;
        cin >> x;
        qu.push(x);
    }

    for (int i = 0; i < s; i++)
    {
        if(!st.empty()){

            if (st.top() != qu.front())
            {
                re = "NO";
                break;
            }
            st.pop();
            qu.pop();
        }
    }

    cout << re;

    return 0;
}