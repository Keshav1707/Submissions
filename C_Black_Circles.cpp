#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define di(x)      \
    long double x; \
    cin >> x
#define vecll vector<ll>
#define pb push_back
#define po pop_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ll dis(int x1, int y1, int x2, int y2)
{
    return 1ll * (x2 - x1) * (x2 - x1) + 1ll * (y2 - y1) * (y2 - y1);
}

void solve()
{
    di(n);
    vector<pairs> v;
    for (ll i = 0; i < n; i++)
    {
        di(a);
        di(b);
        v.pb({a, b});
    }
    di(xa);
    di(ya);
    di(xb);
    di(yb);

    for (auto &&i : v)
    {
        int x = i.first;
        int y = i.second;
        if (dis(xb, yb, x, y) <= dis(xb, yb, xa, ya))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}