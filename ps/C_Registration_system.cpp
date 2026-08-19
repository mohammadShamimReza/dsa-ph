#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;

    map<string, int> mapString;


    for (int i = 0; i < n; i++)
    {
        string inputString;

        cin >> inputString;
        // cout << mapString[inputString] << "this is answer" << endl;

        if (mapString[inputString] == 0)
        {

            mapString[inputString] = 1;
            cout << "OK" << endl;
        }
        else
        {
            mapString[inputString] = mapString[inputString] + 1;
            cout << inputString<<mapString.at(inputString) -1 << endl;
        }
    }



    return 0;
}