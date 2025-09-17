#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    priority_queue<int, vector <int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pq.push(val);
    }
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int v;
        cin >> v;

        if(v == 0){
            int data;
            cin >> data;
            pq.push(data);
            cout << pq.top() << endl;

        }else if(v == 1){
            if(pq.empty()){
                cout << "Empty" << endl;
            }else{
                cout << pq.top() << endl;
            }
        }else if(v==2){

            if (pq.empty())
            {
                cout << "Empty" << endl;

            } else
            {
                pq.pop();
                if(pq.empty()){
                    cout << "Empty" << endl;
                }else{

                    cout << pq.top() << endl;
                }
            }
        }

    }

    return 0;
}