#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int arr[a];
        int even=0;
        int odd = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        if(a %2 != 0 ){
            cout << -1 << endl;
        }else{
            cout << abs(even - odd) /2 << endl;
        }
        }

    return 0;
}