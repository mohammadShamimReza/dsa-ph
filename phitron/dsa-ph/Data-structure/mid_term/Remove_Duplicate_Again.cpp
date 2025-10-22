#include<bits/stdc++.h>
using namespace std;

int main (){
    list<int> data;
    int n;
    while (true)
    {
        cin >> n;
        if(n == -1){
            break;
        }

        data.push_back(n);
    }

    data.sort();
    data.unique();
    for (int l : data)
    {
        cout << l << " ";
    }

    return 0;
}