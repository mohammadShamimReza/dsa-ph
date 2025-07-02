#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   
    for (int i = 0; i < n; i++)
    {
        int l=0;
        int r=0;
        for (int j = 0; j < i; j++)
        {

                l = l + arr[j];
           
            
        }
        for (int k = i+1; k < n; k++)
        {
            
                // cout << i << " ";
                r = r + arr[k];
            

        }
        if(l == r){
            cout << l << " " << r << endl;
            cout << i;

            cout << endl;
            return 0;
        }
        }

    return 0;
}