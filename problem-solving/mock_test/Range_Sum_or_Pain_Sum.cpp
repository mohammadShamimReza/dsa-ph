#include <bits/stdc++.h>
using namespace std;

long long prefix(long long k)
{
    if (k <= 0)
        return 0;
    if (k % 2 == 0)
    {
        long long m = k / 2;
        return m * (m + 1);
    }
    else
    {
        long long m = k / 2;
        return m * (m + 1) + (m + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        cout << prefix(r) - prefix(l - 1) << '\n';
    }
    return 0;
}
