#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> result(n, 0);       // To store the result array
    vector<int> minValue(n, n + 1); // Tracks the minimum allowed value for each position

    while (q--)
    {
        int l, r, m;
        cin >> l >> r >> m;
        l--;
        r--; // Convert to 0-based indexing

        // For the range [l, r], ensure no element is equal to m
        for (int i = l; i <= r; i++)
        {
            if (minValue[i] == m)
            {
                // Conflict detected, impossible to satisfy
                cout << -1 << endl;
                return;
            }
            // Set a valid value other than `m`
            if (result[i] == 0)
            {
                result[i] = (m == 1) ? 2 : 1; // Assign a valid value
            }
            minValue[i] = min(minValue[i], m); // Update minimum valid value
        }
    }

    // Fill any unset elements with valid values
    for (int i = 0; i < n; i++)
    {
        if (result[i] == 0)
        {
            result[i] = 1; // Default to 1
        }
    }

    // Output the result
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        solve();
    }
    return 0;
}
