#include<bits/stdc++.h>
using namespace std;
 
int main (){
    list<int> l1 = {3, 4, 66, 9, 0, 24};
    list<int> l2 = {44, 55, 66};
    // l2 = l1;
    // l1.assign(l2.begin(), l2.end());
    l1.push_back(444);
    l1.push_front(108);
    // l2.pop_back();
    l1.pop_back();
    l1.insert(next(l1.begin(), 3), l2.begin(), l2.end());
    for (auto i : l1)
    {
        cout << i << endl;
    }

    return 0;
}