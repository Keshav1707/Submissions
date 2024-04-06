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
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
void solve()
{
    di(n);
    di(x);
    di(y);
    vecll v;
    map<pairs, int> m;
    int c = 0;
    for (ll i = 0; i < n; i++)
    {
        di(a);
        v.pb(a);
    }
    for (auto &&i : v)
    {
        int a = i % x;
        int b = i % y;
        c += m[{x - a, b}];
        if (a == 0)
            a = x;
        m[{a, b}]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % x != 0 && v[i] % y != 0)
            ans++;
    }
    cout << c << endl;
    return;
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