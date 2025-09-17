#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int k = i; k < n - 2 - i; k++)
        {
            cout << " ";
        }
        cout << "/";

        cout << endl;
    }
    for (int l = 0; l < n / 2; l++)
    {
        cout << " ";
    }

    cout << "X" << endl;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2 - i - 1; j++)
        {
            cout << " ";
        }
        cout << "/";
        for (int k = 0; k < i * 2 + 1; k++)
        {
            cout << " ";
        }
        cout << "\\";

        cout << endl;
    }

    return 0;
}