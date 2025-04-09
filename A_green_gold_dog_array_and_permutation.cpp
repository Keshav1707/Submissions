#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        pair<int, int> m[n];
        int x, j = 1;
        for (auto &&i : m)
        {
            cin >> x;
            i.first = x;
            i.second = j;
            j++;
        }

        sort(m, m + n);
        for (long long i = n - 1; i >= 0; i--)
        {
            /* code */
            cout << m[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}