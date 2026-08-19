#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // First window
    int currentSum = 0;

    for (int i = 0; i < k; i++)
    {
        currentSum += arr[i];
    }

    // First window is initially the best
    int minSum = currentSum;
    int answer = 1;

    // Slide window
    for (int i = k; i < n; i++)
    {
        currentSum = currentSum - arr[i - k] + arr[i];

        if (currentSum < minSum)
        {
            minSum = currentSum;
            answer = i - k + 2;
        }
    }

    cout << answer << '\n';

    return 0;
}