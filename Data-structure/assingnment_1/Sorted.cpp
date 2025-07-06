#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        vector<int> arr(t);
        for (int j = 0; j < t; j++)
        {
            cin >> arr[j];

        }
        string p = "YES";
        for (int k = 1; k < t; k++)
        {
            if(arr[k-1] > arr[k]){
                p = "NO";
            }
        }
        cout << p<< endl;
        }

  return 0;
}