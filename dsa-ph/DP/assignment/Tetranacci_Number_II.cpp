#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    long long int tetr[n + 1];
    tetr[0] = 0;
    tetr[1] = 1;
    tetr[2] = 1;
    tetr[3] = 2;
    for (int i = 4; i <= n; i++)
    {
        tetr[i] = tetr[i - 1] + tetr[i - 2] + tetr[i - 3] + tetr[i - 4];
    }

    cout << tetr[n];

    return 0;
}