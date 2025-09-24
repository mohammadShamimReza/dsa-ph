#include<bits/stdc++.h>
using namespace std;
 
int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;

        if (q == 1){
            int val;
            cin >> val;
            pq.push(val);
        }else if(q == 2){
            if(pq.size() > 0){
                int top = pq.top();
                cout << pq.top() << '\n';
                while (!pq.empty() && top == pq.top())
                {
                    pq.pop();
                }
                
            }
            else
            {
                cout << "empty" << '\n';
            }
        }
    }
    
    return 0;
}