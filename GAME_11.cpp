#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define di(x) \
    ll x;     \
    cin >> x
#define vecll vector<ll>
#define pb push_back
#define po pop_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el << endl;
#define PI 3.14159265359
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
const int MOD = 1e9 + 7;
void solve()
{
    di(n);
    di(m);
    vecll v, va;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    for (ll i = 0; i < m; i++)
    {
        di(x);
        va.pb(x);
    }
    if (n < 4 || m < 4 || n + m < 11)
    {
        cout << -1 << endl;
        return;
    }
    sort(rall(v));
    sort(rall(va));
    int sum = accumulate(v.begin(), v.begin() + 4, 0) + accumulate(va.begin(), va.begin() + 4, 0);
    vecll vb;
    for (ll i = 4; i < n; i++)
    {
        vb.pb(v[i]);
    }
    for (ll i = 4; i < m; i++)
    {
        vb.pb(va[i]);
    }
    sort(rall(vb));
    cout << accumulate(vb.begin(), vb.begin() + 3, sum) << endl;
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