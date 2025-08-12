#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        map<string, int> mp;
        string maxString;
        int maxCount = 0;
        while (ss >> word)
        {
            mp[word]++;

            if(mp[word]> maxCount){
                maxString = word;
                maxCount = mp[word];
            }
        }
            
        cout << maxString << " " << maxCount << endl;

            
    }

    return 0;
}


