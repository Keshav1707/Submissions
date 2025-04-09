#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        vector<int> v(n);
        int maxi = 0, maxindx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > maxi)
                maxindx = i;
            maxi = max(maxi, v[i]);
        }
        int c = 0, x = 0;
        pair<int, int> p[1000];
        for (size_t i = 1; i < n; i++)
        {
            /* code */
            while (v[i] < v[i - 1])
            {
                v[i] += maxi;
                p[c].first = i + 1;
                p[c].second = maxindx + 1;
                if (maxi < v[i])
                    maxindx = i;
                maxi = max(maxi, v[i]);

                c++;
            }
        }
        cout << c << endl;
        for (int i = 0; i < c; i++)
        {
            cout << p[i].first << " " << p[i].second << endl;
        }
    }
    return 0;
}