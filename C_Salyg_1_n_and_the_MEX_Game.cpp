#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, x, y = 0;
    cin >> n;
    long long a[n], maxi = n;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != i)
            maxi = min(maxi, i);
    }

    while (y != -1)
    {
        cout << maxi << endl;
        cin >> y;
        maxi = y;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}