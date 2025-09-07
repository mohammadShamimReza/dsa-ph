#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];

        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back({h[i], i});
        }

        sort(arr.begin(), arr.end(), greater<>());

        int f = arr[0].second;
        int s = arr[1].second;

        if (f < s)
            cout << f << " " << s << endl;
        else
            cout << s << " " << f << endl;
    }

    return 0;
}
