#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(int n, int m)
{
    if (m == 1)
    {
        cout << 0 << endl;
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            cout << 0 << endl;
        }

        return 0;
    }
    if (m >= n + 1)
    {
        cout << n + 1 << endl;
    }
    else
    {
        cout << m << endl;
    }
    for (size_t i = 0; i < min(m - 1, n); i++)
    {
        /* code */
        for (size_t j = 0; j < m; j++)
        {
            /* code */
            cout << (i + j) % m << " ";
        }
        cout << endl;
    }
    if (m < n + 1)
    {
        for (size_t i = m - 1; i < n; i++)
        {
            /* code */
            for (size_t j = 0; j < m; j++)
            {
                cout << j << " ";
            }
            cout << endl;   
        }
        }

    return 0;
}
signed main()
{
    int t, n, m;
    cin >> t;
    while (t-- && cin >> n >> m)
    {
        solve(n, m);
    }
    return 0;
}