#include<bits/stdc++.h>
using namespace std;
int* sort_it(int n, int arr[]) {

    int* arr2 = new int[n];

    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    return arr2;
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int* arr2 = sort_it(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " " ;
    }

    
 
    return 0;
}