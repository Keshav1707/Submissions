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
    vector<pair<int, int>> v, va;
    di(x);
    for (ll i = 0; i < x; i++)
    {
        di(n);
        v.pb({n, i + 1});
        va.pb({n, i + 1});
    }
    sort(all(v));
    vecll vb;
    for (auto &&i : va)
    {
        if (i.second == v.back().second)
            vb.pb(i.first - v[x - 2].first);
        else
            vb.pb(i.first - v.back().first);
    }
    for (auto &&i : vb)
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