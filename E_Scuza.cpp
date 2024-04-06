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
    di(q);
    vecll v, va;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
        sum += x;
        cout << sum << " ";
        v.pb(sum);
    }
    cout << endl;
    for (ll i = 0; i < q; i++)
    {
        /* code */
        di(x);
        auto it = upper_bound(all(va), x);
        cout << distance(va.begin(), it - 1) << " ";
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