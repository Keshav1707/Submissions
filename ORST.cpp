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
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
void solve()
{
    di(n);
    di(m);
    vecll v, va;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
        va.pb(x);
    }

    int maxi = 0;
    for (ll i = 0; i < m; i++)
    {
        di(x);
        maxi = max(x, maxi);
    }
    sort(v.end() - maxi, v.end());
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
signed main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}