#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
   long long int onLight =0;

    for (int i = 0; i < n; i++)
    {
        int light;
        cin >> light;
        if(light == 1){
            onLight++;
        }
    }
    cout << onLight;
    return 0;
}
