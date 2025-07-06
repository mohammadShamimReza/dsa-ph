#include<bits/stdc++.h>
using namespace std;
int main (){
   
        int n;
        cin >> n;

        vector<int> arr1(n);
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[j];
        }

        int m;
        cin >> m;

        vector<int> arr2(m);
        for (int k = 0; k < m; k++)
        {
            cin >> arr2[k];
        }
        int p;
        cin >> p;
        arr1.insert(arr1.begin() + p, arr2.begin(), arr2.end());
        for (int l = 0; l < arr1.size(); l++)
        {
            cout << arr1[l] << " ";
        }
    

    return 0;
}