#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        stack<char> st;

        for (char ch : str)
        {
            if (!st.empty() &&  (ch == '1' && st.top() == '0'))
            {

                st.pop();
            }
            else
            {

                st.push(ch);
            }
        }

        if (st.empty() == true)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}