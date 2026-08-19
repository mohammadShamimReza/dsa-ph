#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = 0;
 
 int d = 0;
    int p1 = 0;
    int p2 = n-1;
    int i = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[p1] > arr[p2])
            {
                s = s + arr[p1];
                p1 = p1 + 1;
            }
            else
            {
                s = s + arr[p2];
                p2 = p2 - 1;
            }
        }
        else
        {
            if (arr[p1] > arr[p2])
            {
                d = d + arr[p1];
                p1 = p1 + 1;
            }
            else
            {
                d = d + arr[p2];
                p2 = p2 - 1;
            }
        }
    }
    

    cout << s << " " << d;

    return 0;
}