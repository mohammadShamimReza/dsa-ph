#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    queue<string> que;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 0){
            string num;
            cin >> num;
            que.push(num);
        }
        else if (num == 1)
        {
            if(!que.empty()){
                cout << que.front() << endl;
                que.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}