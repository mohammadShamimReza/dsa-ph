#include<bits/stdc++.h>
using namespace std;

int main (){
    string text;
    cin >> text;
    int len = text.length();
    int upercase =0;
    int localcase =0;
    string newtext;

    for (int i = 0; i < len; i++)
    {
        int n = text[i];
        if(n < 96){
            upercase++;

        }else{
            localcase++;
        }
        
    }

    // cout << upercase << " " << localcase;

    if(upercase > localcase){

        for (int i = 0; i < len; i++)
        {
            int n = text[i];

            if(n>96){
                text[i] = n - 32;
            }
        }
        }else{
            for (int i = 0; i < len; i++)

            {
                int n = text[i];

                if(n<96){
                    text[i] = n + 32;
                }
            }
            
        }
        cout << text;

        return 0;
}