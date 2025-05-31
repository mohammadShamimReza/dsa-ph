#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size, totalSum;
        cin >> size >> totalSum;
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
        }

        bool p = false;
        if (size > 2)
        {
            for (int k = 0; k < size; k++)
            {
                for (int l = k+1; l < size; l++)
                {
                    for (int m = l+1; m < size; m++)
                    {

                        if (arr[k] + arr[l] + arr[m] == totalSum){
                            if(p == false){

                            
                            cout << "YES" << endl;
                            p = true;
                            }
                        }
                    }
                    
                }
                
            }
           
        }
        if(p == false){
            cout << "NO" << endl;
        }
    }

    return 0;
}