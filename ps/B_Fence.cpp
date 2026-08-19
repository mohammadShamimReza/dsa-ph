#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minh = 0;
    int mini = 0;
    for (int i = 0; i < t; i++)
    {
        minh = minh + arr[i];
    }

    for (int i = t; i < n; i++)
    {
        int ch = minh - arr[i - t];
        minh = ch + arr[i];
        cout << minh;
    }
    // cout << arr[6];
    return 0;
}