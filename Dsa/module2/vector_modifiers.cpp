#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v = {
        1,
        2,
        3,
        4,
        5,
    };
    vector<int> v2;
    v2 = v;
    v2.pop_back();
    v2.insert(v2.end(), 95);
    for (int x : v2)
    {
        cout << x << " " << endl;
    }
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}