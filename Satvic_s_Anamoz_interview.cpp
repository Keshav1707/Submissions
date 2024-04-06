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
    di(x);
    vecll v;
    for (ll i = 1; i <= x; i++)
    {
        di(n);
        if (abs(n - i) != 0)
            v.pb(abs(n - i));
        // cout << n - i << " ";
    }
    // cout << endl;
    sort(all(v));
    int hcf = v[0];
    for (auto &&i : v)
    {
        hcf = __gcd(hcf, i);
    }
    cout << hcf << endl;
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