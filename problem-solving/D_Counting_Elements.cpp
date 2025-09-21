#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_set<int> s(a.begin(), a.end());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.count(a[i] + 1))
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
