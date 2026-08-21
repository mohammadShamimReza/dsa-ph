#include<bits/stdc++.h>
using namespace std;
 
int main (){
    long long int n;
    cin >> n;

    vector<vector<long long int>> arr(n, vector<long long int>(n));
    long long int count = 0;
    for (long long int j = 0; j < n; j++)
    {
        for (long long int i = 0; i < n; i++)
        {
            count++;
            arr[j][i] = count;
        }
        }
        long long int leftDiagonal = 0;

        long long int rightDiagonal = 0;
        for (long long int j = 0; j < n; j++)
        {
            for (long long int i = 0; i < n; i++)
            {
                if(j == i){
                    leftDiagonal += arr[j][i];
                }
                if(j+i == n-1 ){
                    rightDiagonal += arr[j][i];
                }
            }
            
        }

        long long int total = leftDiagonal + rightDiagonal;
        if(n%2!=0){
            long long int mid = arr[n / 2][n / 2];
            total -= mid;
        }
        cout << total;

        return 0;
}