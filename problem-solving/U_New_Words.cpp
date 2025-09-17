#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main (){
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    string fi = "EGYPT";
    int e=0, g=0, y=0, p =0, t = 0;
for (char i:s)
{
    if(i == 'E'){
        e++;
    }else if(i == 'G'){
        g++;
    }
    else if (i == 'Y')
    {
        y++;
    }
    else if (i == 'P')
    {
        p++;
    }
    else if (i == 'T')
    {
        t++;
    }
}

int arr[5] = { e, g, y, p, t };
sort(arr, arr+5);
cout << arr[0];
return 0;
}