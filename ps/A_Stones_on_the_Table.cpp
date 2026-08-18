#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    string color;
    cin >> n >> color;
    int len = color.length();
    int same = 0;
    int res = 0;
    if (n == 1)
    {

        res = 0;
    }else{

        for (int i = 1; i < len; i++)
        {
            
            
            if(color[i] == color[i-1]){
                res++;
            }
        }
    }
    cout << res;
    return 0;
}