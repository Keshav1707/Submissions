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
    vecll v;

    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    int a = INT_MAX, b = INT_MAX, ans = 0;

    for (ll i = 0; i < n; i++)
    {
        if (a > b)
            swap(a, b);
        if (a >= v[i])
            a = v[i];
        else if (b >= v[i])
            b = v[i];
        else
            a = v[i], ans++;
    }
    cout << ans << endl;
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