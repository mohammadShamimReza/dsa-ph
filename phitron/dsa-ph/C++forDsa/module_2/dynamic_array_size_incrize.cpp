#include<bits/stdc++.h>
using namespace std;
int main (){
    int * arr = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
 
    int* arr2 = new int[5];
    for (int i = 0; i < 3; i++)
    {
         arr2[i] = arr[i];


    }

    delete[] arr;

    for (int i = 3; i < 5; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    } 

    return 0;
}