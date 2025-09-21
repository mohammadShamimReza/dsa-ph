#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if(val > 0){
            vec.push_back(1);
        }else if(val < 0){
            vec.push_back(2);
        }else{

            vec.push_back(0);
        }

    }
    for (int i = 0; i < n; i++)
    {
        cout << vec[i]<< " ";
    }

    return 0;
}