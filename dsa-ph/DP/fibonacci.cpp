#include <bits/stdc++.h>
using namespace std;
int fab(int val)
{
    if (val == 0 || val ==1)
    {
        return val;
    }

    int res1 = fab(val - 1);
    int res2 = fab(val - 2);

    return res1 + res2;
}
int main()
{
    cout << fab(9)<< endl;
    return 0;
} 