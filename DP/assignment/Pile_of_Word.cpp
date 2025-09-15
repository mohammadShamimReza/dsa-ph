#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string m, n;
        cin >> m >> n;

        if (m.size() != n.size())
        {
            cout << "NO" << endl;
            continue;
        }

        sort(m.begin(), m.end());
        sort(n.begin(), n.end());

        if (m == n)
            cout << "YES"<< endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
